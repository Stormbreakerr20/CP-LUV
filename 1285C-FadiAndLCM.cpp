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
ll GCD(ll a, ll b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);
}
int main()
{
    ll X = nxt();
    pair<ll, ll> y = {X, 1};
    for (ll i = 2; i <= sqrt(X); i++)
    {
        if (X % i != 0 || ((X / i) % i == 0) || i * (X / i) / GCD(i, X / i) != X)
            continue;
        ll maxi = max(i, X / i);
        if (maxi < y.first)
        {
            y.first = maxi;
            y.second = X / maxi;
        }
    }

    cout << y.first << " " << y.second << endl;
}
