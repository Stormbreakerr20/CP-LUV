#include<bits/stdc++.h>
using namespace std;

bool is_sorted(vector<long long> v){
    for(long long i=0;i<v.size()-1;i++) if(v[i]>v[i+1]) return false;
    return true;
}


int main(){

    int n;
    cin>>n;
    vector<long long> store;

    while(n--){
        long long x;
        cin>>x;
        store.push_back(x);
    }
    
    if(is_sorted(store)) {
        cout<<"0";
        return 0;
    }
    else{
        int from_behind=0;
        for(int i=store.size()-1;i>=1;i--){
            if(store[i-1]>store[i]) break;
            from_behind++;
        }
        from_behind++;

        vector<long long> temp(store);

        for(long long i=0;i<store.size();i++){
            temp[(i+from_behind)%store.size()] = store[i];
        }
        
        if(is_sorted(temp)) {
            cout<<from_behind;
            return 0;
        }
        
    }
    cout<<-1;
}