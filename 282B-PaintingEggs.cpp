#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int diff = 0;

    while(n--){
        int priceA,priceG;
        cin>>priceA>>priceG;
        
        diff+=priceA;
        if(diff <= 500) {
            cout<<"A";
        }
        else{
            diff-=1000;
            cout<<"G";
        }
    }
}