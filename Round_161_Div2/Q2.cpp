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
// bool isTriangle(ll a, ll b, ll c)
// {
//     if (a + b <= c || a + c <= b || b + c <= a)
//         return 0;
//     return 1;
// }
int main()
{
    ll t = nxt();
    while (t--)
    {
        ll n = nxt();
        vector<ll> a(n+1);
        f(i,n){
            ll x = nxt();
            a[x]++;
        }

        ll ans = 0;
        ll cnt = 0;

        f(i,n+1){
            ans += (a[i] * (a[i] - 1) * (a[i]-2)) / 6; // nc3
            ans += (a[i] * (a[i] - 1)) / 2 * cnt; // nc2 * piche ke sare
            cnt += a[i]; // piche ke sare
        }

        cout << ans << endl;
    }
}