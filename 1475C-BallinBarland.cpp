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
        ll k = nxt();
        // Bipartite graph

        vector<pair<ll,ll>> v(k,{0,0});
        vector<ll> boys(a,0),girls(b,0);
        map< pair<ll,ll> , ll> m;
        f(i,k){
            v[i].first = nxt();
            boys[v[i].first-1]++;
        }
        f(i,k){
            v[i].second = nxt();
            girls[v[i].second-1]++;
        }
        ll cnt = 0;
        f(i,k){
            ll boy = v[i].first;
            ll girl = v[i].second;
            cnt += k - ( boys[boy-1] + girls[girl-1] - 1);
            // A + B - A int B
        }

        cout<<cnt/2<<endl;
    }
}