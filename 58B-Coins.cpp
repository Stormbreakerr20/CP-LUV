#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;
#define ll long long 
int main(){
    ll n;
    cin>>n;
    ll x = n;
    for(ll i = n;i>0;i--){
        if(!(x%i)){
            cout<<i<<" ";
            x = i;
        }
    }
}