#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}

void f(){
    ll n = nxt();

    while(n>=0){

        if(n%11 == 0) {
            cout<<"YES"<<endl;
            return ;
        }
        n-=111;
        
    }

    cout<<"NO"<<endl;
}


int main()
{
    ll t = nxt();
    while(t--){
        f();
    }
}