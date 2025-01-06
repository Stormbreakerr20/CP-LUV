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
void func()
{
    ll n = nxt();
    ll k = nxt();

    vector<ll> v(n);
    f(i,n) cin>>v[i];

    bool sorted = 1;
    for(ll i =0;i<n-1;i++) {
        if(v[i+1] < v[i]){
            sorted = 0;
            break;
        }
    }

    if(sorted || k >= 2) cout<<"YES"<<nline;
    else cout<<"NO"<<nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}