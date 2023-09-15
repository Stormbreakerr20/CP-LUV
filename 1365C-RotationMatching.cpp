#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

const int N = 2e5+5;

inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
int main()
{
    ll n = nxt();

    ll m[N]={0},count[n]={0};

    for(ll i = 0; i< n;i++) m[nxt()] = i;
    
    for(ll i = 0; i< n;i++) {
        ll inp = nxt();
        m[inp] = (m[inp] - i)>=0? m[inp]-i :n - abs(i - m[inp]);
        count[m[inp]]++;
    }

    ll ans = 0;
    for(auto i:count) ans = max(ans,i);
    cout<<ans;

}