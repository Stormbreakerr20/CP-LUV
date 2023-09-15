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
void pl1(){
    cout<<"Ashishgup"<<endl;
}
void pl2(){
    cout<<"FastestFinger"<<endl;
}
bool isprime(ll n){
    for(ll i = 2;i<= sqrt(n);i++) if(!(n%i)) return false;
    return true;
}
void f(){
    ll  n =nxt();

    if(n == 1) pl2();

    else if(n&1 || n==2) pl1();

    // case that n is 2^x no odd div
    else if( !(n & (n-1)) ) pl2();

    // Case that it has odd divisors
    else{
        // case 1 it has 2^1 only means A can divide by largest odd factor and then 2 will be left then f will win
        // 1 n  is 2*prime a will lose any how
        if( n%4 != 0  && isprime(n/2)) pl2();
        // 2 if n is 2**x* prime* oddnotprime then a can win by div by oddnotprime
        else pl1();
    }
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        f();
    }
}