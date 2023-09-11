#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<set>
#include<climits>
using namespace std;
#define ll long long 
int main(){
    string a,b;
    cin>>a>>b;
    vector<int> storea(26),storeb(26);
    for(auto i:a) storea[i - 'a']++;
    for(auto i:b) storeb[i - 'a']++;
    int ans = 0;
    for(int i = 0;i<26;i++){
        if(storeb[i] && !storea[i] ){
            cout<<-1;
            return 0;
        }
        if(storeb[i] <= storea[i]) ans+= storeb[i];
        else ans+= storea[i];
    }
    cout<<(ans?ans:-1);
}
