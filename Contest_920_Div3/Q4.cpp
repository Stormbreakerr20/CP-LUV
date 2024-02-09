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
        ll m = nxt();

        ll ans = 0;
        
        vector<ll> a(n);
        vector<ll> b(m);

        f(i,n) cin>>a[i];
        f(i,m) cin>>b[i];

        sort(all(b));
        sort(all(a));

        ll s = 0;
        ll e = n-1;
        ll x = 0;
        ll y = m-1;
        while(s <= e && x <= y)
        {
            if(abs(a[s] - b[y]) > abs(a[e] - b[x]))
            {
                ans += abs(a[s++] - b[y--]);
            }
            else
            {
                ans += abs(a[e--] - b[x++]);
            }
        }

        cout<<ans<<endl;
    }
}