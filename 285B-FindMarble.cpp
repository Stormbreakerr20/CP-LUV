#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,start,final;
    cin>>n>>start>>final;

    vector<long long> store(n+1,0);

    for(int i=1;i<=n;i++){
        cin>>store[i];
    }

    long long ans=0;
    long long current = start;
    if(start == final ) cout<<0;
    else{
        while(current!=final){
            current = store[current];
            if(current == start) break;
            ans++;
        }
        if(current == start) cout<<-1;
        else cout<<ans;
    }
}