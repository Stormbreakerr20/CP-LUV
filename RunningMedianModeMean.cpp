#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n) - 1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n) - 1; i >= s; i--)
string nline = "\n";
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
void print(vector<ll> v, ll n)
{
    f(i, n) cout << v[i];
    cout << endl;
}
long long calculate(long long p,
                    long long q)
{
    long long mod = 1000000007, expo;
    expo = mod - 2;

    // Loop to find the value
    // until the expo is not zero
    while (expo)
    {

        // Multiply p with q
        // if expo is odd
        if (expo & 1)
        {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;

        // Reduce the value of
        // expo by 2
        expo >>= 1;
    }
    return p;
}
void func()
{
    ll n = nxt();
    // mean
    ll sum = 0;
    ll cnt = 0;

    // median
    multiset<ll> l, r;

    // mode
    map<ll, ll> mp;
    multiset<pair<ll, ll>> m;

    while (n--)
    {
        string s;
        cin >> s;
        if (s == "insert")
        {
            ll t = nxt();

            // mean
            sum += t;
            cnt++;

            // median

            l.insert(t);
            r.insert(*l.rbegin());
            l.erase(l.find(*l.rbegin()));

            if (r.size() > l.size())
            {
                l.insert(*r.begin());
                r.erase(r.find(*r.begin()));
            }
            // cout<<"L= ";
            // for(auto i:l) cout<<i<<", ";
            // cout<<"R= ";
            // for(auto i:r) cout<<i<<", ";
            // cout<<nline;

            // mode
            if (mp.count(t))
                m.erase({mp[t], -t});
            mp[t]++;
            m.insert({mp[t], -t});
        }
        else if (s == "remove")
        {
            ll t = nxt();

            // mean
            sum -= t;
            cnt--;

            // median
            if (t > *l.rbegin())
            {
                r.erase(r.find(t));
                if (l.size() - r.size() > 1)
                {
                    r.insert(*l.rbegin());
                    l.erase(l.find(*l.rbegin()));
                }
            }
            else
            {
                l.erase(l.find(t));
                if (r.size() > l.size())
                {
                    l.insert(*r.begin());
                    r.erase(r.find(*r.begin()));
                }
            }

            // mode
            m.erase({mp[t], -t});
            mp[t]--;
            if (mp[t])
                m.insert({mp[t], -t});
        }
        else if (s == "getMean")
        {
            if (cnt == 0)
            {
                cout << -1 << nline;
                continue;
            }

            if (sum % cnt == 0)
                cout << (sum / cnt) << nline;
            else
                cout << calculate(sum, cnt) << nline;
        }
        else if (s == "getMedian")
        {
            if (cnt == 0)
            {
                cout << -1 << nline;
                continue;
            }
            if (cnt & 1)
            {
                cout << *l.rbegin() << nline;
            }
            else
            {
                ll val = *l.rbegin() + *r.begin();

                if (val & 1)
                    cout << calculate(val, 2) << nline;
                else
                    cout << val / 2 << nline;
            }
        }
        else
        {
            if (cnt == 0)
            {
                cout << -1 << nline;
                continue;
            }

            cout << abs((*m.rbegin()).second) << nline;
        }
    }
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}