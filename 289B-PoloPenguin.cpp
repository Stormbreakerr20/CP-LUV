#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>

#define ll long long


using namespace std;
ll f(vector<ll>& store,ll target,ll d){
    ll ans = 0;
    for(auto i:store){
        if((abs(i-target)%d !=0)) return 1e9;
        ans += (abs(i-target)/d);
    }
    return ans;
}
int main(){
    
    ll n,m,d;
    cin>>n>>m>>d;
    vector<ll> store(n*m);
    for(ll i=0;i<n*m;i++) cin>>store[i];

    sort(store.begin(),store.end());

    ll median1 = store[store.size()/2]; 
    ll median2 = store[store.size()/2+1];

    ll pos1 = f(store,median1,d);
    ll pos2 = f(store,median2,d);

    cout<<(pos1 == 1e9 && pos2 == 1e9 ? -1:min(pos1,pos2));
    
    
}