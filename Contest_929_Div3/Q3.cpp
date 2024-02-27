#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
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

void func()
{
    ll a = nxt();
    ll b = nxt();
    ll l = nxt();
    set<int> s;

    if (a == b)
    {
        for (ll i = 0; i <= 30; i++)
        {
            ll t1 = ceil(pow(a, i));
            if (l < t1)
                break;
            if (l >= t1 && l % t1 == 0)
                s.insert(l / (t1));
        }

        cout<<s.size()<<endl;
        return;
    }

    for (ll i = 0; i <= 30; i++)
    {
        for (ll j = 0; j <= 30; j++)
        {
            if(ceil(pow(a, i)) > 1e6 || ceil(pow(b,j)) > 1e6) break;
            ll t1 = ceil(pow(a, i));
            ll t2 = ceil(pow(b, j));
            if (l < t1 || l < t2 || l < t1 * t2)
                break;
            if (l >= t1 * t2 && l % (t1 * t2) == 0)
                s.insert(l / (t1 * t2));
        }
    }

    cout << s.size() << endl;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}