#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    vector<vector<char>> store(n,vector<char> (m,'.'));

    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            cin>>store[i][j];
        }
    }

    long long ans=0;

    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){

            if(store[i][j] != 'W') continue;
            //up
            if(i-1>=0 && store[i-1][j] == 'P') ans++;
            //Down
            else if(i+1<n && store[i+1][j] == 'P') ans++;
            //Left
            else if(j-1>=0 && store[i][j-1] == 'P') ans++;
            //Right
            else if(j+1<m && store[i][j+1] == 'P') ans++;

        }
    }
    cout<<ans;

}   