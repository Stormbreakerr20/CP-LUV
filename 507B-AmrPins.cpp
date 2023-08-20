#include<bits/stdc++.h>
using namespace std;
int main(){
    long long radius,x,y,xnew,ynew;
    cin>>radius>>x>>y>>xnew>>ynew;
    
    long long distance = ceil(sqrt(pow(abs(x-xnew),2)+ pow(abs(y-ynew),2)));
    cout<<ceil((double)distance/(2*radius));
}