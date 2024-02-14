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
int main()
{
    ll t = nxt();
    while(t--)
    {
        ll n = nxt();
        ll s = 1;
        ll e = 1e9+1;

        vector<ll> a;
        while(n--)
        {
            ll k = nxt();
            ll inp = nxt();
            if(k == 1) s = max(s,inp);
            else if(k == 2) e = min(e,inp);
            else a.push_back(inp);
        }

        ll cnt = 0;
        for(auto i:a)
        {
            if(i >= s && i <=e) cnt++;
        }

        if(e >= s) cout<<(e - s + 1 - cnt)<<endl;
        else cout<<0<<endl;
    } 
}