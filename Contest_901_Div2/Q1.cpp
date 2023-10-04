#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
int main()
{
    ll t = nxt();
    while(t--){
        ll a = nxt();
        ll b = nxt();
        ll n = nxt();
        vector<ll> k(n);
        for(ll i =0;i<n;i++) k[i] = nxt();
        ll ans = b-1;
        b = 1;
        for(ll i = 0;i<n;i++){
            ans += min(b+k[i],a) - 1;
        }
        cout<<(ans + 1)<<endl;
    }
}