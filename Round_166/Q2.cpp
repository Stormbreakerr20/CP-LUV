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
    ll n1 = nxt();
    ll n2 = n1 + 1;
    vector<ll> a(n1),b(n2);

    f(i,n1) cin>>a[i];
    f(i,n2) cin>>b[i];

    ll cnt = 0;
    ll mini1 = LLONG_MAX;
    ll mini2 = LLONG_MAX;
    for(ll i = 0;i<n1;i++)
    {
        cnt += abs(a[i] - b[i]);
        if((b[i] <= b[n1] && b[n1] <= a[i]) || (a[i] <= b[n1] && b[n1] <= b[i])) mini1 = 0;
        mini2 = min({mini2,abs(a[i] - b[n1]),abs(b[i] - b[n1])});
    }

    if(mini1 == 0) {
        cout<<cnt + 1<<nline;
    }
    else{
        cout<<(cnt + 1 + mini2)<<nline;
    }


}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}