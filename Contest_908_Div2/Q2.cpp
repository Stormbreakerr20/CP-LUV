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
    f(i, n) cout << v[i] + 1;
    cout << endl;
}
bool compare(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.second < b.second;
}

int main()
{
    ll t = nxt();
    while (t--)
    {
        ll n = nxt();
        vector<pair<ll, ll>> v(n);
        
        f(i, n) v[i] = {nxt(), i};
        sort(all(v));

        vector<ll> b(n);

        ll got = 1;
        b[v[0].second] = 1;
        ll s = 0;

        bool c1 = 0, c2 = 0;

        while (s < n - 1)
        {
            if (v[s].first != v[s + 1].first)
            {
                if (c1)
                    b[v[s + 1].second] = 2;
                else
                    b[v[s + 1].second] = 1;
                s++;
            }
            else
            {
                if (b[v[s].second] == 1)
                {
                    b[v[s + 1].second] = 2;
                    c1 = 1;
                    s++;
                    while (s < n - 1 && v[s].first == v[s + 1].first)
                        b[v[s + 1].second] = 2, s++;
                }
                else if (b[v[s].second] == 2)
                {
                    b[v[s + 1].second] = 3;
                    c2 = 1;
                    s++;
                    while (s < n - 1 && v[s].first == v[s + 1].first)
                        b[v[s + 1].second] = 3, s++;
                }
            }
        }

        if (!c1 || !c2)
            got = 0;

        if (got)
            for (auto i : b)
                cout << i << " ";
        else
            cout << -1;
        cout << endl;
    }
}