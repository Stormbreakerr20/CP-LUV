#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;

    vector<long long> store;
    long long mini =INT_MAX;
    long long maxi =INT_MIN;
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x;
        store.push_back(x);
        mini = min(mini,x);
        maxi = max(maxi,x);
    }

    if(maxi - mini > k) {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    for(long long i = 0;i<n;i++){
        for(long long j=0;j<store[i];j++){
            cout<< j%k + 1<<" ";
        }
        cout<<endl;
    }
}