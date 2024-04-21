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
    ll k = nxt();
    ll even = 0;

    ll ans = INT_MAX;
    f(i,n)
    {
        ll inp = nxt();
        ans = min(ans, (k - (inp%k))%k);
        even += !(inp&1);
    }

    if(k == 4){
        if(even >= 2 || ans == 0) cout<<0<<nline;
        else if(even == 1) cout<<1<<nline;
        else cout<<min(ans,2ll)<<nline;
        return;
    }

    cout<<ans<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}