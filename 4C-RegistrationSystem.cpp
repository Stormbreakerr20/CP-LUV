#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string,int> store;

    while(n--){
        string x;
        cin>>x;
        if(store.count(x)){
            cout<<x<<store[x]<<endl;
            store[x]+=1;
        }
        else {
            store[x]=1;
            cout<<"OK"<<endl;
        }
    }

}
