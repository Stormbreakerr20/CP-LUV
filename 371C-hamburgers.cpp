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
    map<char,ll> m;
    string st;
    cin>>st;
    for(auto i:st) m[i]++;

    ll b = nxt();
    ll s = nxt();
    ll c = nxt();

    ll pb = nxt();
    ll ps = nxt();
    ll pc = nxt();

    ll x = nxt();

    ll i = 0LL;
    ll j = 1e15;

    ll ans = 0;
    while(i <= j)
    {
        ll mid = (i + j)>>1;

        ll cost = 0;
        cost += m['B'] ? max((mid*m['B'] - b)*pb,0LL) : 0;
        cost += m['S'] ? max((mid*m['S'] - s)*ps,0LL) : 0;
        cost += m['C'] ? max((mid*m['C'] - c)*pc,0LL) : 0;
        if(cost <= x) {
            // cout<<ans<<nline;
            ans = mid;
            i = mid + 1;
        }
        else j = mid - 1;
    }

    cout<<ans<<nline;
}
int main()
{
    ll t = 1;
    while (t--)
    {
        func();
    }
}