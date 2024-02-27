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
void func()
{
    ll n = nxt();
    vector<ll> v(n),pref(n + 1);
    f(i,n) cin>>v[i];
    pref[0] = 0;
    pref[1] = v[0];
    for(ll i = 1;i<n;i++) pref[i + 1] = pref[i] + v[i];

    ll q = nxt();
    f(i,q)
    {
        ll s = nxt();
        ll tar = nxt() + pref[s-1];

        ll r = lower_bound(pref.begin() + 1,pref.end(),tar) - pref.begin();
        if(pref[r] - tar > tar - pref[r-1]) r--; // you get an extra term by doing this
        r = max(r,s);
        r = min(r,n);
        cout<<r<<" ";
    }

    cout<<endl;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}