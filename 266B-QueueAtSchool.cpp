#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,skip;
    cin>>n>>skip;
    string s;
    cin>>s;

    while(skip--){
        for(int i=0;i<n-1;i++){
            if(s[i] == 'B' && s[i+1] == 'G') swap(s[i],s[i+1]),i++;
        }
    }
    cout<<s;
}

