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
ll help(ll k,ll n,ll a,ll b)
{
    if(k < 0) k = 0;
    if(k > n) k = n;
    return (b*(b+1))/2 + (n-k)*a - (((b-k)*(b- k + 1))/2);
}
void func()
{
    ll n = nxt();
    ll a = nxt();

    ll b = nxt();

    cout<<max(help(b-a,n,a,b),help(b-a+1,n,a,b))<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}