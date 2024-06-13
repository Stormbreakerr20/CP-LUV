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

    vector<ll> pref(n),maxarr(n);
    pref[0] = v[0];
    ll maxi = v[0];

    maxarr[0] = v[0];

    for(ll i = 1;i<n;i++) pref[i] = v[i] + pref[i-1];
    for(ll i = 1;i<n;i++) {
        maxi = max(maxi,v[i]);
        maxarr[i] = maxi;
    }

    ll cnt = (v[0] == 0);
    bool prev = (v[0] == 0);

    for(ll i = 1;i<n;i++)
    {
        if((pref[i] - maxarr[i] == maxarr[i]) || (prev && v[i] == 0)) {
            cnt++;
            prev = 1;
        }
        else prev = 0;
    }

    cout<<cnt<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}