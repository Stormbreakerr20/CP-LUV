#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<pair<long long,long long>> store;
    map<int,int> m;

    for(long long k=0;k<n;k++){
        long long home ,away;
        cin>>home>>away;
        m[home]++;
        store.push_back({home,away});
    }
    long long matches = n-1;

    for(auto i:store){
        i.first = matches + m[i.second];
        i.second = matches - m[i.second];
        cout<<i.first<<" "<<i.second<<endl;
    }
}