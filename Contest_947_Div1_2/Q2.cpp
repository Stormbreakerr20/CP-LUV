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
    ll n = nxt();

    set<ll> s;
    f(i,n) {
        s.insert(nxt());
    }

    ll mini1 = *s.begin();
    ll mini2 = LLONG_MAX;

    for(auto i:s)
    {
        if(i%mini1 == 0) continue;
        mini2 = i;
        break;
    }

    for(auto i:s)
    {
        if(i%mini1 && i%mini2) {
            cout<<"NO"<<nline;
            return;
        }
    }

    cout<<"YES"<<nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}