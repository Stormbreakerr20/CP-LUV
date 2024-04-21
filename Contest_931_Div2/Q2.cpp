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
void func(vector<ll> &dp)
{
    ll n = nxt();
    if(n <= 30) {
        cout<<dp[n]<<endl;
        return;
    }
    ll extra = ((n/15) - 1);
    n = n - extra*15;
    cout<<(dp[n] + extra)<<endl;
}
int main()
{
    ll t = nxt();
    vector<ll> dp(31, LLONG_MAX);
    vector<ll> coins = {1, 3, 6, 10, 15};
    dp[0] = 0;
    for (ll i = 1; i < 31; i++)
    {
        for (auto j : coins)
        {
            if (j > i)
                break;
            dp[i] = min(dp[i], dp[i - j] + 1);
        }
    }
    while (t--)
    {
        func(dp);
    }
}