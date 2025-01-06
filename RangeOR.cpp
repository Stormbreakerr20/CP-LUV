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
    vector<ll> v(n);
    f(i,n) cin>>v[i];

    ll s = 1;
    ll e = n;
    ll ans = n;

    while(s <= e)
    {
        ll mid = s + (e-s)/2;

        /// Kth bit OR
        vector<ll> temp(n + 1);
        bool pos = 1;
        for(ll k = 0;k<31 && pos;k++)
        {
            for(ll i = 0;i<n;i++)
            {
                temp[i + 1] = temp[i] + ((v[i]>>k)&1);
            }
            ll range_or = temp[mid] - temp[0] > 0 ? 1 : 0;
            for(ll i = mid;i<=n;i++)
            {
                ll curr_range_or = temp[i] - temp[i - mid] > 0 ? 1 : 0;
                if(curr_range_or != range_or){
                    pos = 0;
                    break;
                }
            }
        }

        if(!pos) {
            s = mid + 1;
        }else{
            ans = mid;
            e = mid - 1;
        }
    }

    cout<<ans<<nline;
}   

int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}