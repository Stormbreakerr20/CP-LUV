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
void func()
{
    ll x = nxt();
    ll y = nxt();
    ll z = nxt();

    ll k = nxt();

    ll ans = 0;

    for(ll i = 1;i<=x;i++)
    {
        for(ll j = 1;j<=y;j++)
        {
            ll r = k / (i * j);
            if (r <= z && i * j * r == k)
                ans = max(ans,(x - i + 1) * (y - j + 1) * (z - r + 1));
        }
    }

    cout<<ans<<nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}