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
    ll n = nxt();
    ll k = nxt();
    if (n == 1)
    {
        cout << 0 << nline;
        return;
    }

    ll s = 1;
    ll e = k - 1;

    ll ans = -1;

    while (s <= e)
    {
        ll mid = (s + e) >> 1;
        ll cnt = k * mid + 1 - (mid * (mid + 1)) / 2;
        // cout<<mid<<" "<<cnt<<nline;
        if (cnt >= n)
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    cout << ans << nline;
}
int main()
{
    ll t = 1;
    while (t--)
    {
        func();
    }
}