#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n) - 1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n) - 1; i >= s; i--)
string nline = "\n";
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
ll dfs(unordered_map<ll,vector<ll>> &m,ll node,ll curr,ll& tar,ll prev)
{
    if(node == tar) return curr;

    for(auto i:m[node])
    {
        if(i != prev || prev == -1){
            return dfs(m,i,curr + 1,tar,node);
        }
    }

    return 0;
}
bool isprime[205];
ll prime[25];

void func()
{
    ll n =nxt();
    vector<vector<ll>> dp(n,vector<ll> (25,1));

    ll ans = 0;
    ll mod = 1e9 + 7;
    for(ll k = n-2;k>=0;k--)
    {
        for(ll i = 0;i<25;i++)
        {
            ll t = 0;
            for(ll j = 0;j<25;j++)
            {
                if(isprime[prime[i] + prime[j]] == 0)
                {
                    t = (t + dp[k + 1][j])%mod;
                }
            }
            dp[k][i] = t;
        }
    }

    for(ll i = 0;i<25;i++)
    {
        ans += dp[0][i];
    }

    cout<<ans<<nline;
}   

int main()
{
    
    for(int i = 0;i<205;i++) isprime[i] = 1;

    for(int i = 2;i<15;i++)
    {
        for(int j = i*i;j<205;j+=i)
        {
            isprime[j] = 0;
        }
    }

    int cnt = 0;
    for(int i = 2;i<101;i++)
    {
        if(isprime[i]) prime[cnt++] = i;
    }

    ll t = 1;
    while (t--)
    {
        func();
    }
}