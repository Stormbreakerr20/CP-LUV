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
    f(i, n) cout << v[i] + 1;
    cout << endl;
}
void bfs(unordered_map<int,vector<int>> &g,ll i,vector<bool> &visited){
    queue<ll> q;
    q.push(i);

    while(!q.empty()){
        ll node = q.front();
        q.pop();
        visited[node] = 1;
        for(auto k: g[node]){
            if(!visited[k]){
                q.push(k);
            }
        }
    }
}
int main()
{
    ll n = nxt();
    ll m = nxt();
    vector<vector<int>> lang(m + 1);

    f(i,n){
        ll k = nxt();
        f(j,k) lang[nxt()].push_back(i);
    } 

    unordered_map<int,vector<int>> g;
    for(ll i = 1;i<=m;i++){
        if(lang[i].size() == 0) continue;
        ll node = lang[i][0];
        for( auto j : lang[i]){
            g[node].push_back(j);
            g[j].push_back(node);
        }
    }

    // for(auto i: g){
    //     cout<<i.first<<" => ";
    //     for(auto k: i.second) cout<<k<<" ";
    //     cout<<endl;
    // }

    vector<bool> visited(n);

    ll individual_comp = 0;
    f(i,n){
        if(!visited[i] && g[i].size()){
            individual_comp++;
            bfs(g,i,visited);
        }
    }
    ll alone = 0;
    f(i,n) alone += (!visited[i]);

    if(alone == n) cout<<n<<endl;
    else cout<<(individual_comp + alone - 1)<<endl;
}