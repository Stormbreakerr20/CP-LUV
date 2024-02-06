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
int main()
{
    int x, n;
    cin >> x >> n;

    int s = x;

    for (int j = 1; j * j <= x; j++)
    {
        if (x % j)
            continue;
        if (j >= n)
            s = min(s, j);
        if (x / j >= n)
            s = min(s, x / j);
    }

    int ans = x / s;
    cout << ans << endl;
}