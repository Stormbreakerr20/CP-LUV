#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int houses,tasks;
    cin>>houses>>tasks;
    
    long long int prev = 1;
    long long int total_time=0;

    while(tasks--){
        long long int current;
        cin>>current;
        if(prev<=current) total_time+=current-prev;
        else total_time+= houses - prev + current;
        prev = current;
    }
    cout<<total_time;
}