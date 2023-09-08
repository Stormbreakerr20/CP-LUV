#include<bits/stdc++.h>
using namespace std;
int main(){ 
    long long n;
    cin>>n;

    unordered_map<long long,pair<long long,long long>> m;
    long long index = 0;
    while(n--){
        long long k;
        cin>>k;
        if(m.find(k) == m.end()) m[k] = {0,index};
        else if(m.find(k) != m.end() && m[k].first!=-1){  
            if(m[k].first != index - m[k].second && m[k].first != 0) {
                m[k].first = -1;
            }
            else {
                m[k].first = index - m[k].second;
                m[k].second = index;
            }
        }
        index++;
    }
    set<long long> s;
    for(auto i:m) if(i.second.first != -1) s.insert(i.first);

    cout<<s.size()<<endl;
    for(auto i:s){
        if(m[i].first) cout<<i<<" "<<m[i].first<<endl;
        else cout<<i<<" "<<0<<endl;
    }
}