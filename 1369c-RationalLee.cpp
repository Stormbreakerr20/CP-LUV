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

        vector<ll> v(n);
        f(i, n) v[i] = nxt();

        sort(all(v));

        ll j = n - 1;
        ll i = 0;
        ll ans = 0;

        vector<ll> toget(k);
        f(i, k) toget[i] = nxt();
        
        sort(all(toget));
        ll t = 0;

        while (t < k)
        {
            if (toget[t] > 1)
                break;
            ans += 2 * v[j--];
            t++;
        }
        k--;
        while (t <= k)
        {
            ans += v[j--] + v[i];
            i += toget[k] - 1;
            k--;
        }

        cout << ans << endl;
    }
}