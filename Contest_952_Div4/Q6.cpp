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
    ll h = nxt();

    ll n = nxt();

    vector<pair<ll,ll>> v(n);
    ll sum = 0;
    ll maxi = 0;
    f(i,n)
    {
        cin>>(v[i].first);
        sum += v[i].first;
    }
    f(i,n)
    {
        cin>>(v[i].second);
    }

    h = h -  sum;
    if(h <= 0) {
        cout<<1<<nline;
        return;
    }

    ll s = 0;
    ll e = 1e12;
    ll ans;

    // BS on answers
    while(s <= e)
    {
        ll mid = ( s + e )>>1;
        ll ns = 0;

        // helper
        f(i,n) {
            ns += (mid/v[i].second) * v[i].first;
            if(ns >= h) break;
        }
        
        if(h - ns <= 0)
        {
            ans = mid;
            e = mid - 1;
        }
        else s = mid + 1;
    }

    cout<<(ans + 1)<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}