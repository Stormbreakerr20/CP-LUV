//  https://cses.fi/problemset/task/1633
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
// ll rec_dp(vector<ll> &dp,vector<ll>&v,ll x,ll n){
//     if(x == 0) return 0;

//     if(dp[x] != 1e9) return dp[x];

//     for(ll i = 0;i<n;i++){
//         if(x - v[i] >= 0){
//             dp[x] = min(dp[x],rec_dp(dp,v,x - v[i],n) + 1);
//         }
//     }
//     return dp[x];
// }
int main()
{
    ll n = nxt();
    ll x = nxt();
    vector<ll> v(n);
    f(i, n) v[i] = nxt();

    vector<ll> dp(x+1,1e9);
    
    // dp[i] = min ways to get i

    dp[0] = 0;
    for(ll i = 1;i<=x;i++){
        for(ll j = 0;j<n;j++){
            if(i - v[j] >=0) {
                dp[i] = min(dp[i],dp[i - v[j]] + 1);
            }
        }
    }
    cout<<(dp[x] == 1e9?-1:dp[x]);
}
