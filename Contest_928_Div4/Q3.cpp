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
void prll(vector<ll> v, ll n)
{
    f(i, n) cout << v[i];
    cout << endl;
}
ll Digit_SumUptoN_Helper(ll n, ll a[]) 
{ 
    if (n < 10) 
        return (n * (n + 1) / 2); 
     
    ll d = (ll)(log10(n)); 
    ll p = (ll)(ceil(pow(10, d))); 
    ll msd = n / p; 
     
    return (msd * a[d] + (msd * (msd - 1) / 2) * p + 
            msd * (1 + n % p) + 
            Digit_SumUptoN_Helper(n % p, a)); 
} 

ll Digit_SumUptoN(ll n) 
{ 
    ll d = (ll)(log10(n));
 
    ll a[d + 1]; 
    a[0] = 0; a[1] = 45;
     
    for(ll i = 2; i <= d; i++) 
        a[i] = a[i - 1] * 10 + 45 * 
               (ll)(ceil(pow(10, i - 1))); 
 
    return Digit_SumUptoN_Helper(n, a); 
} 

void func()
{
    ll x = nxt();
    cout<<Digit_SumUptoN(x)<<endl;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}