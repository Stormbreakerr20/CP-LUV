#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;

    vector<vector<int>> B(row,vector<int> (col,0));
    vector<vector<int>> A(row,vector<int> (col,-1));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>B[i][j];
            for(int l = 0;l<col;l++) A[i][l] = A[i][l]!=0?B[i][j]:0;
            for(int l = 0;l<row;l++) A[l][j] = A[l][j]!=0?B[i][j]:0;
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int k = 0;
            for(int l = 0;l<col;l++) k= k || A[i][l];
            for(int l = 0;l<row;l++) k= k || A[l][j];
            if(k!=B[i][j]) {
                cout<<"NO";
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;
        for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<A[i][j]<<" ";
        }cout<<endl;
    }
    

}