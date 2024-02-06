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
    ll k = nxt();

    vector<ll> v(n);f(i,n) v[i] = nxt();

    vector<vector<ll>> dp(n + 1,vector<ll> (k + 1,0));

    f(i,n+1) dp[i][0] = 1;

    ll mod = 1e9 + 7;

    for(ll sum = 1;sum<=k;sum++){
        for(ll i = 1;i<n+1;i++){
            // not pick
            ll not_pick = (dp[i-1][sum]);
            // pick
            ll pick = 0;
            if(sum - v[i-1]>=0) pick = (dp[i][sum - v[i-1]]);

            dp[i][sum] = (pick + not_pick)%mod;
        }
    }

    cout<<(dp[n][k])%mod<<endl;
}