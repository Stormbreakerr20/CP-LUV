#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<set>
#include<climits>
using namespace std;
#define ll long long 

inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}

ll GCD(ll a, ll b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);
}

int main(){

    pair<ll,ll> a = {nxt(),nxt()};
    pair<ll,ll> b = {nxt(),nxt()};

    // Check horizontal
    ll num = a.first;
    ll den = b.first;
    double val = (double)num/(double)den;

    if(a.second >= (val)*b.second){
        ll numf = a.first*a.second*den -  a.first*a.first*b.second;
        ll denf = a.first*a.second*den;
        ll gcd = GCD(numf,denf);

        cout<<(numf/gcd)<<"/"<<(denf/gcd);
        return 0;
    }
    
    // check vertical
    num = a.second;
    den = b.second;
    val = (double)num/(double)den;

    ll numf = a.first*a.second*den -  a.second*a.second*b.first;
    ll denf = a.first*a.second*den;
    ll gcd = GCD(numf,denf);

    cout<<(numf/gcd)<<"/"<<(denf/gcd);
    return 0;

}