#include<bits/stdc++.h>
using namespace std;
int main(){
    long long m = 1e9 +7;   
    long long f1,f2;
    cin>>f1>>f2;
    long long n;
    cin>>n;

    switch (n%6)
    {
    case 0:
        cout<< ((f1-f2 + m)%m +m)%m;  // this is an important part first reduce it by adding m then %m then again same step for complete moduli
        break;
    case 1:
        cout<< ((f1 + m)%m +m)%m;
        break;
    case 2:
        cout<<((f2+ m )%m +m)%m;
        break;
    case 3:
        cout<<((f2-f1+m)%m +m)%m;
        break;
    case 4:
        cout<<((-f1+m)%m +m)%m;
        break;
    case 5:
        cout<<((-f2+m)%m +m)%m;
        break;
    default:
        break;
    } 
}