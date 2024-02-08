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

        vector<ll> a(n);
        f(i,n) cin>>a[i];

        vector<ll> pref(n,-1);

        ll prev = a[0];
        ll index = 0;

        for(ll i = 1;i<n;i++)
        {
            if(a[i] == prev)
            {
                pref[i] = pref[i-1];
            }
            else{
                pref[i] = index;
            }
            index = i;
            prev = a[i];
        }

        ll x = nxt();

        while(x--)
        {
            ll u = nxt();
            ll l = nxt();

            ll p = -1;
            ll q = -1;

            if(pref[l-1] != -1 && pref[l-1] >= u-1){
                p = l;
                q = pref[l-1] + 1;
            }

            cout<<p<<" "<<q<<endl;


        }
    }
}