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
    ll m = nxt();

    if(m > n) {
        cout<<"NO"<<nline;
        return;
    }
    
    if((m%2 == 0 && n%2 == 0) || (m%2 != 0 && n%2 != 0)) cout<<"YES"<<nline;
    else cout<<"NO"<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}