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
        ll a = nxt();
        ll cmp = nxt();

        ll ans = 0;

        for(ll k = 2;k<=a;k++)
        {
            ll z = a - ((a-1)/(2*k-2))*(2*k-2);
            if(z)
            {
                if((z <= k && z == cmp) || (z > k && (2*k - z == cmp))) {
                    ans++;
                }
            }
        }

        cout<<ans<<endl;

    }
}