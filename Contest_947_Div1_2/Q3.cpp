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
    vector<ll> v(n);
    f(i,n) cin>>v[i];

    if(n == 2) {
        cout<<min(v[0],v[1])<<nline;
        return;
    }

    // iterate over all array of size 3 and get max from all medians of 3

    ll ans = 0;
    ll i = 0;
    while( i < n-2 )
    {
        vector<ll> temp(v.begin() + i,v.begin() + i + 3);
        sort(all(temp));
        ans = max(ans,temp[1]);

        i++;
    }

    cout<<ans<<nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}