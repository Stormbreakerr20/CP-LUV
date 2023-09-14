#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}

ll nearestBS(vector<ll> &v,ll t){

    ll s = 0;
    ll e = v.size()-1;
    ll closest_index = -1;
    while(s<=e){
        ll mid = s+ (e-s)/2;

        if(v[mid]>t) e = mid - 1;
        else{
            closest_index = mid;
            s = mid+1;
        }
    }

    return closest_index;


}

int main()
{
    ll n = nxt();
    vector<ll> v(n);

    for(ll i = 0;i<n;i++) v[i] = nxt();
    sort(all(v));

    ll m = nxt();

    while(m--){
        ll inp = nxt();

        if(inp>=v[0] && inp<v[n-1]){
            cout<<(nearestBS(v,inp) + 1)<<endl;
        }
        else if(inp >= v[n-1] ) cout<<n<<endl;
        else cout<<0<<endl;
    }
}