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
    ll n = nxt();
    ll m = nxt();

    vector<ll> a(n);
    f(i,n) cin>>a[i];

    // dp[i][k] = array ending with last element as k ans have length as i
    vector<vector<ll>> dp(n + 1,vector<ll> (m + 1,0));
    int mod = 1e9 + 7;
    // starting from len 1
    // dp[1][k] = 1 if a[0] == k || a[0] = 0
    // above says there is only 1 way to make a array of size 1 that ends with k

    for(ll j = 1;j<=m;j++)
    {
        if(a[0] == 0) dp[1][j] = 1;
        else if( a[0] == j ) dp[1][j] = 1;
    }

    for(ll i = 2;i<=n;i++)
    {
        for(ll j = 1;j<=m;j++)
        {
            if( a[i-1] == 0 || a[i-1] == j )
            {
                for(ll k = j-1;k<=j+1 && k <= m;k++)
                {
                    dp[i][j] = (dp[i][j]%mod + dp[i-1][k]%mod)%mod;
                }
            }
        }
    }

    ll ans = 0;
    for(ll i = 1;i<=m;i++) ans = (ans%mod + dp[n][i]%mod)%mod;

    cout<<ans<<endl;
}