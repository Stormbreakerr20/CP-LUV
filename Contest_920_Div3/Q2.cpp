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
void print(vector<ll> v, ll n)
{
    f(i, n) cout << v[i];
    cout << endl;
}
int main()
{
    ll t = nxt();

    while(t--)
    {
        ll n = nxt();
        string a;cin>>a;
        string b;cin>>b;

        ll ca = 0;
        ll cb = 0;
        f(i,n) 
        {
            ca += (a[i] == '1' && b[i] == '0');
            cb += (a[i] == '0' && b[i] == '1');
        }

        cout<<max(ca,cb)<<endl;

    }
}