#include<bits/stdc++.h>
using namespace std;
bool compare(pair<long long,long long> &p1,pair<long long,long long> &p2){
    return p1.first == p2.first ? p1.second>p2.second :p1.first>p2.first;
}
int main(){
    int n;
    cin>>n;

    vector<pair<long long,long long>>s;
   while (n--)
   {
    long long a,b;
    cin>>a>>b;
    s.push_back({b,a});
   }
   
   sort(s.begin(),s.end(),compare);

   long long counter = 1;
   long long ans = 0;

   for(auto i:s){
    if(!counter) break;
    if(i.first && counter) counter+=i.first;
    if(counter--) ans+=i.second;
   }

   cout<<ans;
}