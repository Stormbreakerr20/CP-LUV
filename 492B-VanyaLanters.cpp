#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,l;
    cin>>n>>l;
    set<long long int>s;
    while(n--){
        long long int x;
        cin>>x;
        s.insert(x);
    }
    double d=0;
    int prev=-1;
    for(auto i:s){
        if(prev == -1 && i!=0) d=i;
        else if(i!=0){
            d = max(d,(double)(i - prev)/2);
        }
        prev =i;
    }
    if(prev!= l) d= max(d,(double)(l - prev));
    cout<<setprecision(10)<<d;
}