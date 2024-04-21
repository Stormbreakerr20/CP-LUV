#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
string nline = "\n";
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
void print(vector<ll> v, ll n)
{
    f(i, n) cout << v[i];
    cout << endl;
}
void func()
{
    vector<pair<ll,ll>> v;
    ll n = nxt();
    ll p = nxt();
    vector<ll> tell(n); f(i,n) cin>>tell[i];
    vector<ll> cost(n); f(i,n) cin>>cost[i];

    f(i,n)
    {
        if(cost[i] <= p) v.push_back({cost[i],tell[i]});
    }

    sort(all(v));
    ll ans = p;
    ll left = n-1;
    for(auto i: v)
    {
        ll ppl = min(left,i.second);
        ans = ans + ppl*i.first;
        left = left - ppl;
        if(left == 0) break;
    }

    ans += left*p; 

    cout<<ans<<nline;

}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}