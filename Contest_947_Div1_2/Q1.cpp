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

    vector<ll> a;
    f(i,n) a.push_back(nxt());
    
    if (n < 2) {
        cout<<"YES"<<nline;
        return;
    }
    ll i = 1;
    while (i < n && a[i] >= a[i - 1]) {
        ++i;
    }

    if (i == n) {
        cout<<"YES"<<nline;
        return;
    }

    if(a[i] > a[0]) {
        cout<<"NO"<<nline;
        return;
    }
    i++;
    while (i < n && a[i] >= a[i - 1] && a[i] <= a[0]) {
        ++i;
    }
    
    if( i == n ){
        cout<<"YES"<<nline;
        return;
    }
    cout<<"NO"<<nline;


}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}