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
void func()
{
    ll n = nxt();
    ll x = nxt();

    ll ans = 0;
    vector<ll> v(n);
    f(i, n)
    {
        cin >> v[i];
    }

    ans = v[0];
    for (ll i = 0; i < n - 1; i++)
    {
        ans = max(v[i + 1] - v[i], ans);
    }

    ans = max(ans, (x - v[n - 1]) * 2);

    cout << ans << nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}