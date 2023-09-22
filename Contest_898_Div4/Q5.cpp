#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
ll f(vector<ll> &v, ll mid){
    ll ans = 0;
    for(auto i: v){
        if(i<mid) ans += mid - i;
    }
    return ans;
}
int main()
{
    ll t = nxt();
    while(t--){
        ll n =nxt();
        ll maxw = nxt();

        vector<ll> v(n);
        ll maxi = LLONG_MIN;
        for(ll i = 0;i<n;i++) {
            v[i] = nxt();
            if(v[i]>maxi) maxi = v[i];
        }

        ll s = 1,e = maxw + maxi;
        ll ans = 0;

        while(s<=e){
            ll mid = s + (e-s)/2;
            ll current_w = f(v,mid);
            if(current_w <= maxw) {
                s = mid + 1; 
                ans = mid;
            }
            else if(current_w > maxw) e = mid -1;
        }

        cout<<ans<<endl;
    }
}