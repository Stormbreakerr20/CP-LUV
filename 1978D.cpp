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
    ll c = nxt();

    vector<ll> v(n);
    f(i,n) cin>>v[i];

    v[0] += c;

    ll widx = 0;
    f(i,n) {
        if(v[widx] < v[i]) widx = i;
    }

    vector<ll> pref(n,0);
    pref[0] = v[0];
    for(ll i = 1;i<n;i++) pref[i] += pref[i-1] + v[i];

    vector<ll> ans(n);

    f(i,n)
    {
        if(i == widx) ans[i] = 0;
        else{
            if(pref[i] >= v[widx]) ans[i] = i;
            else ans[i] = i + 1;
        }
    }

    for(auto i:ans) cout<<i<<" ";
    cout<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}