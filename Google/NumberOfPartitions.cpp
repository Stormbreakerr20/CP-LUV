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

    vector<ll> pref(n);
    pref[0] = v[0];
    
    for(ll i = 1;i<n;i++) pref[i] = pref[i-1] + v[i];

    map<ll,ll> rdiff;
    for(int i = 0;i<n-1;i++)
    {
        rdiff[pref[n-1] - 2*pref[i]]++;
    }

    ll ans = rdiff[0];

    map<ll,ll> ldiff;
    for(ll i = 0;i<n;i++)
    {
        ans = max(ans,ldiff[v[i]] + rdiff[-v[i]]);
        ldiff[pref[n-1] - 2*pref[i]]++;
        rdiff[pref[n-1] - 2*pref[i]]--;
    }
    cout<<ans<<endl;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}