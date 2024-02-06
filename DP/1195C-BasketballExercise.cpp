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
// TLE
ll Sol1(ll i,ll row,vector<vector<ll>> &dp,vector<vector<ll>>&a){
    if(i == a[0].size()-1) return a[row][i];
    if(dp[row][i] != -1) return dp[row][i];

    for(ll j = i + 1;j<a[0].size();j++){
        dp[row][i] = max(dp[row][i],a[row][i] + Sol1(j,!row,dp,a));
    } 

    return dp[row][i];
}
int main()
{
    ll n = nxt();
    vector<vector<ll>> a(2,vector<ll> (n));
    vector<vector<ll>> dp(2,vector<ll> (n,-1));
    f(i,2){
        f(j,n) a[i][j] = nxt();
    }

    // cout<<(max(Sol1(0,0,dp,a),Sol1(0,1,dp,a)));

    // Sol2
    dp[0][0] = a[0][0];
    dp[1][0] = a[1][0];

    for(ll j = 1;j<n;j++){
        ll maxi = 0;
        for(ll i = 0;i<2;i++){
           dp[i][j] = a[i][j];
           if(j > 1) dp[i][j] += max(dp[!i][j-2],dp[!i][j-1]);
           else dp[i][j] += dp[!i][j-1];
        }
    }

    cout<<(max(dp[0][n-1],dp[1][n-1]));
}