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
ll GCD(ll a, ll b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);
}
int main()
{
    ll t = nxt();
    while(t--){
        ll n = nxt();
        ll m = nxt();
        ll gcd = GCD(n,m);
        
        ll k = m/gcd;

        // If m/gcd not pow of 2 ans not possible
        if(k&(k-1)) {
            cout<<-1<<endl;
            continue;
        }
        ll ans = 0;

        while(n != m && n%m ){
            if(n>m) n = n % m;
            ans += n;
            n = n*2;
        }

        cout<<ans<<endl;


    }
}