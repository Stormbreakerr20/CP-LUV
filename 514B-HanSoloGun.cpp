#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
#define ll long long 
int main(){
    ll n,x0,y0;
    cin>>n>>x0>>y0;

    unordered_map<double,ll> m;

    while(n--){
        ll x,y;
        cin>>x>>y;
        double slope = x-x0 != 0?(double)(y-y0)/(x-x0):LLONG_MAX;
        m[slope]++;
    }
    cout<<m.size();

}