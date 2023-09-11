#include<iostream>
#include<string>
#include<vector>

using namespace std;
#define ll long long 
int main(){
    ll n,m;
    cin>>n>>m;
    vector<int> store(n+1,0);
    for(ll i=0;i<m;i++){
        vector<int> temp;
        int rep = 0;
        for(int j = 0;j<3;j++){
            ll k;
            cin>>k;
            if(!store[k]) temp.push_back(k);
            else rep = store[k];
        }
        for(int j=1;j<=3;j++){
            if(rep != j){
                store[temp[temp.size()-1]] = j;
                temp.pop_back();
            }
        }   
    }

    for(int i= 1;i<=n;i++){
        cout<<store[i]<<" ";
    }
}