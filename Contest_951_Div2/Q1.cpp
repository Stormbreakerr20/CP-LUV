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
    vector<ll> v(n);

    f(i,n) cin>>v[i];

    ll ans = INT_MAX;

    f(i,n-1)
    {
        ll t = max(v[i],v[i+1]);
        ans = min(t,ans);
    }
    cout<<ans - 1<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}