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
void tem()
{
    ll n = nxt();

    ll a = nxt();
    ll b = nxt();

    vector<ll> v(n);

    f(i,n) cin>>v[i];

    map<pair<ll,ll>,ll> m;


    ll ans = 0;
    
    // (x-y)%b = 0 ==> (x%b - y%b)%b = 0 ==> x%b = y%b;
    // (x+y)%a = 0 ==> (x%a + y%a)%a = 0 ==> y%a = a - x%a;

    for(auto i: v)
    {
        ll Xmod_req = (a - i%a)%a;
        ll Ymod_req = i%b;

        ans += m[{Xmod_req,Ymod_req}];
        m[{i%a,i%b}]++;
    }
    cout<<ans<<endl;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        tem();
    }
}