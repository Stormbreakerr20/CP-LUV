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
    ll a = nxt();
    ll b = nxt();

    ll x = abs(a- b);
    if(x&1) {
        cout<<1<<nline;
        return;
    }
    
    ll ans = 1;
    ll i = 1;
    ll val = 1;

    while(val <= x) {
        val = 1<<i;
        if(x%val == 0) ans = val;
        i++;
    }

    cout<<(ans)<<nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}