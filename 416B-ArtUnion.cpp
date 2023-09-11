// Online C++ compiler to run C++ program online
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<set>
#include<climits>
using namespace std;
#define ll long long 
int main(){
    ll m,n;
    cin>>m>>n;
    vector<vector<int>> s(m,vector<int> (n));
    vector<vector<int>> t(m,vector<int> (n+1,0));
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++) cin>>s[i][j];
    }
    
    for(int j = 1;j<=n;j++){
        int carry = 0;
        for(int i = 0;i<m;i++){
            int freeat = max(carry,t[i][j-1]);
            t[i][j]= freeat+s[i][j-1];
            carry = t[i][j];
        }
    }
 
    for(int i = 0;i<m;i++){
        cout<<t[i][n]<<" ";
    }
}