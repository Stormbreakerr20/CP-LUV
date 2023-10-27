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
ll f_(vector<ll> &v,vector<ll> &dp,ll index){
    if(index >= v.size()-1) return 0ll;
    if(dp[index] != -1 ) return dp[index];

    for(ll j = index + 1;j<v.size();j++){
        if((j+1)%(index+1) == 0 && v[j]>v[index]){
            dp[index] = max(dp[index],1 + f_(v,dp,j));
        }
    }

    f_(v,dp,index+1);

    if(dp[index] == -1) dp[index] = 0;
    return dp[index];

}
ll func(ll ind, vector<ll> & v){
    if(ind>v.size()-1) return 0;

    ll count = 0;
    for(ll i = 2*ind;i<v.size();i+=ind){
        if(v[i]>v[ind]){
            count = max(count,1 + func(i,v));
        }
    }
    return count;

}
int main()
{
    ll t = nxt();
    while(t--){
        ll n = nxt();
        vector<ll> v(n+1);
        for(ll i = 1;i<n+1;i++) cin>>v[i];

        ll maxi = 1;
        for(ll i = 1;i<n+1;i++){
            maxi =max(maxi,1 + func(i,v));
        }

        cout<<maxi<<endl;

    }
}