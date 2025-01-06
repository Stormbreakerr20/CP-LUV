// Insert, Delete, Find number of ways to form sum X from subsets

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
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
void func()
{
    vector<int> dp(1001,0);
    dp[0] = 1;
    const int mod = 1e9 + 7;
    int Q;
    cin >> Q;
    while(Q--) {
        int tt,x;
        cin >> tt >> x;
        if(tt == 0) {
            for(int i=1000;i>=x;--i)
                dp[i] = (dp[i] + dp[i-x]) % mod;
        }
        else if(tt == 1) {
            for(int i=x;i<=1000;++i)
                dp[i] = (dp[i] - dp[i-x] + mod) % mod;
        }
        else {
            cout << dp[x]<<" ";
        }
    }
}
int main()
{
    
    ll t = 1;
    while(t--)
    {
        func();
    }
}