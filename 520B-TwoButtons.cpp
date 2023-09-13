#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <math.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
int main()
{
    ll a = nxt(),b = nxt();

    ll steps = 0;
    while(b>a){
        if(b&1){
            b++;
            steps++;
        }
        b = b/2;
        steps++;
    }
    cout<<a-b + steps;
    return 0;
    
}