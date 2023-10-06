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
int main()  
{
    ll t = nxt();
    while(t--){
        ll n = nxt();
        vector<ll> s(n),dp(n,0);

        f(i,n) s[i] = nxt();

        for(ll i = n-2;i>=0;i--){
            for(ll j = i+1;j<n;j++){
                if(s[j]>s[i] && (j+1)%(i+1) == 0) dp[i] = max(dp[i],dp[j] + 1);
            }
        }

        cout<<*max_element(all(dp)) + 1<<endl;
    }
}