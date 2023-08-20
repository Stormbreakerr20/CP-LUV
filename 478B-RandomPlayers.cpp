#include<bits/stdc++.h>
using namespace std;
long long int nC2(long long int n){
    return (n*(n-1))/2;
}
int main(){
    long long int students,groups;
    cin>>students>>groups;
    if(students == groups){
        cout<<0<<" "<<0;
        return 0;
    }
    long long int x = students-groups;
    long long int maximum_possible = nC2(x+1); // n-m+1C2
    
    long long int division_per_group = students/groups;

    long long int left  = students - groups*division_per_group;
    long long int minimum_possible = nC2(division_per_group)*(groups-left) + nC2(division_per_group+1)*left;

    cout<<minimum_possible<<" "<<maximum_possible;
}