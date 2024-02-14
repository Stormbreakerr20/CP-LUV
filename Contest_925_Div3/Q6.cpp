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
void dfs(vector<vector<ll>> &g, ll node, vector<bool> &visited, vector<bool> &call,bool &ans)
{
    visited[node] = 1;

    for (auto i : g[node])
    {
        if(call[i] == 1 && visited[i] == 1) {
            ans = 0;
            return;
        }
        if (!visited[i])
        {
            call[i] = 1;
            dfs(g, i, visited,call ,ans);
            call[i] = 0;
        }

    }
}
void tem()
{
    ll n = nxt();
    ll m = nxt();

    vector<vector<ll>> g(n + 1);

    for (ll k = 0; k < m; k++)
    {
        vector<ll> temp(n);
        f(i,n) cin>>temp[i];

        for(ll i = 2;i<n;i++)
        {
            g[temp[i-1]].push_back(temp[i]);
        }
    }

    vector<ll> indeg(n+1,0);
    indeg[0] = INT_MAX;
    for(ll i = 1;i<=n;i++)
    {
        for(auto k:g[i])
        {
            indeg[k]++;
        }
    }
    queue<ll> q;
    for(ll i = 1;i<=n;i++) if(indeg[i] == 0) q.push(i);
    vector<ll> ans;
    while(!q.empty())
    {
        ll node = q.front();
        ans.push_back(node);
        q.pop();
        for(auto i: g[node])
        {
            indeg[i]--;

            if(indeg[i] == 0)
            {
                q.push(i);
            }
        }
    }

    if(ans.size() == n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
int main()
{
    ll t = nxt();
    while (t--)
    {
        tem();
    }
}