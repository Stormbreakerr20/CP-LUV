#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long current_h=0;
    vector<long long> trees;

    for(int i=0;i<n;i++) {
        long long x;
        cin>>x;
        trees.push_back(x);
    }
    long long total_time=0;
    for(int i=0;i<n;i++){
        total_time += trees[i]-current_h + 1;
        current_h = trees[i];
        if(i<n-1 && trees[i]>trees[i+1]){
            total_time += trees[i] - trees[i+1] + 1;
            current_h -= (trees[i] - trees[i+1]);
        }
        else if(i<n-1) total_time+=1;
    }
    cout<<total_time;
}