#include<bits/stdc++.h>
using namespace std;
int main(){long long n,m;
    cin>>n>>m;
    set<long long> s; 
    while(m--){
        long long x;
        cin>>x;
        if(x == 1 || x == n){
            cout<<"NO";
            return 0;
        }
        s.insert(x);
    }
    long long consecutive_dirt = 0;
    long long last_dirt =-1;
    for(auto i:s){
        if(last_dirt!= -1 && i!=last_dirt+1) consecutive_dirt=0;
        last_dirt = i;
        consecutive_dirt++;
        if(consecutive_dirt == 3){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}
