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
int main()
{
    ll t = nxt();
    while (t--)
    {
        ll n = nxt();
        ll k = nxt();
        vector<ll> store;
        for (ll i = 0; i < n; i++)
        {
            ll inp = (k - (nxt() % k));
            if (inp != k)
                store.push_back(inp);
        }
        ll m = store.size();
        if (m == 0)
        {
            cout << 0 << endl;
            continue;
        }
        sort(all(store));
        vector<ll> temp(m);
        temp[0] = store[0];
        for (int i = 1; i < m; i++)
        {
            if (store[i - 1] == store[i])
                temp[i] = temp[i - 1] + k;
            else
                temp[i] = store[i];
        }
        sort(all(temp));

        cout << temp[m - 1] + 1 << endl;
    }
}