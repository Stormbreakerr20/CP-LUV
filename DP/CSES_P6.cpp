// When array dp problem with two array try to think break them into prefix/suffix problem

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
int main()
{
    ll n = nxt();
    ll X = nxt();

    vector<ll> vals(n),w(n);

    f(i,n) w[i] = nxt();
    f(i,n) vals[i] = nxt();

    // vector<vector<ll>> dp(n+1,vector<ll> (X+1,0));
    vector<ll> dp(X+1,0);

    // dp[i][x] = max val that we can get from first i values st wt x is allowed

    // base
    // for len = 0 subproblem val possible = 0;

    // we have two options for each value => pick/not pick
    for(ll i = 1;i<=n;i++){
        vector<ll> temp(X+1,0);
        for(ll x = 0;x<=X;x++){
            ll wt = w[i-1];
            ll val = vals[i-1];

            // ll pick = x >= wt ? val + dp[i-1][x - wt]: 0;
            ll pick = x >= wt ? val + dp[x - wt]: 0;
            // ll not_pick =  dp[i-1][x];
            ll not_pick =  dp[x];

            // dp[i][x] = max(pick,not_pick);
            temp[x] = max(pick,not_pick);
        }
        dp = temp;
    }
    cout<<dp[X];
    // cout<<dp[n][X];
}