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
void print(vector<ll> v, ll n)
{
    f(i, n) cout << v[i];
    cout << endl;
}
int main()
{
    ll t = nxt();

    while(t--)
    {
        ll n = nxt();

        set<ll> s;
        f(i,n) s.insert(nxt());

        set<pair<ll,ll>> ranges;

        for(auto i: s)
        {
            ranges.insert({i + 1,0});
            ranges.insert({i + n,1});
        }

        ll ans = 0;
        ll c = 0;
        for(auto i: ranges)
        {
            c += (i.second == 0 ? 1 : -1);
            ans = max(ans,c);
        }
        cout<<ans<<endl;
    }
}