#include<bits/stdc++.h>
#include<math.h>
using namespace std;

#define PI 3.1415926536



int main(){
    long long  n;
    cin>>n;
    vector<long long> store(n);
    
    for(long long i = 0;i<n;i++) cin>>store[i];
    sort(store.begin(),store.end());

    long long ans = 0;
    if(n&1){
        ans+= pow(store[0],2);
        for(int i=1;i<n-1;i+=2) ans+= (pow(store[i+1],2) - pow(store[i],2));
    }
    else{
        for(int i=0;i<n-1;i+=2) ans+= (pow(store[i+1],2) - pow(store[i],2));
    }

    cout<<PI*ans;
}