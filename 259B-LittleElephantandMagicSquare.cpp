#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long a1,a2,a3;
    vector<vector<long long>> matrix(3,vector<long long> (3,0));
    for(long long i=0;i<3;i++){
        long long sum =0;
        for(long long j=0;j<3;j++){
            cin>>matrix[i][j];
            sum+=matrix[i][j];
        }
        if(i==0) a1=sum;
        else if(i==1) a2=sum;
        if(i==2) a3=sum;
    }

    long long x = (a2+a3-a1)/2;
    long long y = (a1+a3-a2)/2;
    long long z = (a1-a3+a2)/2;

    for(long long i=0;i<3;i++){
        for(long long j=0;j<3;j++){
            if(i==0 && j==0) cout<<x<<" ";
            else if(i==1 && j==1) cout<<y<<" ";
            else if(i==2 && j==2) cout<<z<<" ";
            else cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

}