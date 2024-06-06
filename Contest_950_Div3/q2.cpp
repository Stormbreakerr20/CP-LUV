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
    ll fav = nxt();
    ll k = nxt();

    vector<ll> a(n);f(i,n) cin>>a[i];

    ll fav_val = a[fav-1];

    ll cntb = 0;
    ll cnte = 0;
    for(auto i:a){
        cntb += (i > fav_val);
        cnte += (i == fav_val);
    }

    if(cntb >= k) cout<<"NO"<<nline;
    else if(cntb + cnte > k) cout<<"MAYBE"<<nline;
    else cout<<"YES"<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}