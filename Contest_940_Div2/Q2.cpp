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
ll highestPowerof2(ll n)
{
   ll p = (ll)log2(n);
   return (ll)pow(2, p); 
}
 
void func()
{
    ll n = nxt();
    ll k = nxt();

    if(n == 1)
    {
        cout<<k<<nline;
        return;
    }

    if(k & (k-1) == 0)
    {
        cout<<k-1<<" "<<1<<" ";
        for(ll i = 0;i<n-2;i++) cout<<0<<" ";
    }
    else{
        ll x = highestPowerof2(k);
        cout<<x - 1<<" "<<(k - x + 1)<<" ";
        for(ll i = 0;i<n-2;i++) cout<<0<<" ";
    }

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