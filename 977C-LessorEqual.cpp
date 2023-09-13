#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <queue>
#include<algorithm>
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
    ll n=nxt();
    ll k=nxt();

    vector<ll> store(n);
    for(ll i=0;i<n;i++) store[i] = nxt();

    sort(all(store));

    if(k == 0) cout<<( (store[k] == 1)?-1: store[k]-1);
    else if((store[k] == store[k-1])) cout<<"-1";
    else cout<<store[k-1];
}