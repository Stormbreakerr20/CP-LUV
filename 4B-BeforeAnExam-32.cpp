#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,time;
    cin>>d>>time;

    vector<int> minele(35,0);
    vector<int> maxele(35,0);

    int lowerbound=0;
    int upperbound=0;
    vector<int> ans_array;
    int k=0;

    while(k<d){
        cin>>minele[k]>>maxele[k];
        ans_array.push_back(minele[k]);
        lowerbound+=minele[k];
        upperbound+=maxele[k];
        k++;
    }

    if(time>=lowerbound && time<=upperbound){
        cout<<"YES"<<endl;
        if(lowerbound<time){
            for(int i=0;i<d;i++){
                long long int diff = maxele[i] - minele[i];
                int j=1;
                while(j<=diff){
                    if(lowerbound==time) break;
                    lowerbound++;
                    ans_array[i]++;
                    j++;
                }
            }
        }

        for(auto i: ans_array) cout<<i<<" ";
    }
    else cout<<"NO";
}
