// CF - 825E

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
    ll n = nxt();
    ll m = nxt();

    vector<set<ll>> v(n + 1);
    vector<ll> outdeg(n + 1);

    f(i,m)
    {
        ll a = nxt();
        ll b = nxt();
        v[b].insert(a);
        outdeg[a]++;
    }

    set<pair<ll,ll>> s;
    for(ll i = 1;i<=n;i++) s.insert({outdeg[i],-i});

    vector<ll> ans(n+1);

    while(!s.empty())
    {
        auto top = *(s.begin());
        // cout<<top.first<<" "<<top.second<<" ";
        ans[-top.second] = n--;

        s.erase(*s.begin());
        for(auto i:v[-top.second])
        {
            s.erase({outdeg[i],-i});
            outdeg[i]--;
            s.insert({outdeg[i],-i});
        }
    }

    for(ll i = 1;i<ans.size();i++) cout<<ans[i]<<" ";
}
int main()
{
    ll t = 1;
    while(t--)
    {
        func();
    }
}