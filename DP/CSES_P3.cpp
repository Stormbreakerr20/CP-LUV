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
    ll x = nxt();
    ll mod = 1e9 + 7;
    vector<ll> v(n);f(i,n) v[i] = nxt();

    vector<ll> dp(x+1,0);

    //dp[i] = no. of ways to make the sum i

    dp[0] = 1; // to get zero only 1 way exist
    for(ll i = 1;i<=x;i++){
        for(auto j:v){
            if(i - j >= 0){
                dp[i] += (dp[i-j])%mod;
            }
        }
    }
    cout<<(dp[x]%mod)<<endl;
}