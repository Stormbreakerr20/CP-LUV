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
    f(i, n) std::cout << v[i] + 1;
    std::cout << endl;
}
int main()
{
    ll n = nxt();
    ll W = nxt();    

    vector<ll> v(n),w(n);
    ll sumi = 0;
    f(i,n) {
        w[i] = nxt();
        v[i] = nxt();
        sumi += v[i];
    }

    // index,value 
    // we get min weight that can be achieved for tha value
    vector<vector<ll>> dp(n + 1,vector<ll> (sumi + 1,INT_MAX));

    f(i,n + 1) dp[i][0] = 0;

    for(ll val = 1;val <= sumi;val++)
    {
        for(ll i = 1;i<=n;i++)
        {
            dp[i][val] = dp[i-1][val];
            if(v[i - 1] <= val) dp[i][val] = min(dp[i][val],w[i - 1] + dp[i - 1][val - v[i - 1]]);
        }
    }

    ll ans = INT_MAX;
    for(ll i = sumi;i>=0;i--)
    {
        if(dp[n][i] <= W) {
            ans = i;
            // std::cout<<dp[n][i]<<endl;
            break;
        } 
    }

    std::cout<< ans<<endl;
}