#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n) - 1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n) - 1; i >= s; i--)
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
    vector<vector<ll>> a(n,vector<ll> (m)),b(n,vector<ll> (m));

    f(i,n)
    {
        f(j,m) {
            cin>>a[i][j];
        }
    }
    f(i,n)
    {
        f(j,m) {
            cin>>b[i][j];
        }
    }

    map<set<ll>,bool> mp;

    for(ll i = 0;i<n;i++)
    {
        set<ll> s(all(a[i]));
        mp[s] = 1;
    }
    for(ll i = 0;i<n;i++)
    {
        set<ll> s(all(b[i]));
        if(mp[s] == 0) {
            cout<<"NO"<<nline;
            return;
        }
    }
    mp.clear();
    
    for(ll j = 0;j<m;j++)
    {
        set<ll> s;
        for(ll i = 0;i<n;i++) s.insert(a[i][j]);
        mp[s] = 1;
    }
    for(ll j = 0;j<m;j++)
    {
        set<ll> s;
        for(ll i = 0;i<n;i++) s.insert(b[i][j]);
        if(mp[s] == 0) {
            cout<<"NO"<<nline;
            return;
        }
    }
    
    cout<<"YES"<<nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}