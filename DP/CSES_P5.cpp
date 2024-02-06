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
ll min_step(ll n ,vector<ll>& dp){
    if(n < 10) return 1;
    if(n == 0) return 0;

    if(dp[n] != -1) return dp[n];

    string s = to_string(n);
    ll mini = 1e9;
    for(auto i:s){
        if( i != '0') mini = min(mini,1 + min_step(n - (i - '0'),dp));
    }

    return dp[n] = mini;
}
int main()
{
    ll n = nxt();
    vector<ll> dp(n+1,-1);
    cout<<min_step(n,dp);
}