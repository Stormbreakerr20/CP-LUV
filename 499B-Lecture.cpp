#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    unordered_map<string,string> store;
    while(m--) {
        string a, b;
        cin>>a>>b;
        store[a]=b;
    }

    while(n--){
        string inp;
        cin>>inp;
        if(inp.length() <= store[inp].length()) cout<<inp<<" ";
        else cout<<store[inp]<<" ";
    }

}