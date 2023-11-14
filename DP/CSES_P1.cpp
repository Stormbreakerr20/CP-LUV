//  https://cses.fi/problemset/task/1633/
// https://leetcode.com/problems/min-cost-climbing-stairs/description/
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
    ll mod = 1e9 + 7;
    ll n = nxt();

    vector<ll> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(ll i = 2;i<=n;i++){
        for(ll j = 1;j<=min(6ll,i);j++){
            dp[i] += (dp[i - j])%mod;
        }
        if(i<7) dp[i]++;
    }
    cout<<(dp[n]%mod)<<endl;


}