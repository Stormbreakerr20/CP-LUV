#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> v(26,0);
    string s;
    cin>>s;
    int toinsert;
    cin>>toinsert;
    long long maxi = -1;

    for(int i=0;i<26;i++){
        cin>>v[i];
        maxi=max(v[i],maxi);
    }
    
    long long ans =0;
    long long  x =1;

    for(auto i:s) ans+=v[i-'a']*x++;
    while(x<= toinsert+s.length()) ans+= maxi*x++;

    cout<<ans;

}