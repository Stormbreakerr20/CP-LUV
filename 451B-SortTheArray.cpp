#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int> s;
    vector<long long int> v;

    while(n--){
        long long int x;
        cin>>x;
        v.push_back(x);
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    long long int k=0;
    long long int l=0;
    long long int r =0;
    bool swap =0;

    while(r<v.size()-1){
        if(v[r]<=v[r+1]) r++;
        else if(v[r+1]<v[r]){
            l=r;
            while(r<v.size()-1 && v[r+1]<=v[r] ) r++;
            reverse(v.begin()+l,v.begin()+r+1);
            swap=1;
            break;
        }
    }
    if(!swap){
        cout<<"yes"<<endl<<1<<" "<<1;
        return 0;
    }
    for(long long int i=0;i<v.size();i++){
        if(v[i]!=s[i]){
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes"<<endl<<l+1<<" "<<r+1;
}