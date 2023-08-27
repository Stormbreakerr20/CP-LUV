#include<bits/stdc++.h>
using namespace std;
int main(){
    long long books,time;
    cin>>books>>time;

    vector<long long> v(books,0);

    long long k=0;

    while(books--) {
        cin>>v[k++];
    }

    long long i=0,j=0;
    long long ans =0;
    long long ctime =0;

    while(j<v.size()){
        if(v[j] + ctime <=time) ctime+=v[j++];
        else {
            ans = max(ans,j-i);
            while(ctime + v[j] >time) ctime-=v[i++];
        }
        
    }
    
    ans = max(ans,j-i);
    cout<<ans;

}