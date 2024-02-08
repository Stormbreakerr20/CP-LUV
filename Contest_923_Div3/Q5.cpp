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
    int t = nxt();
    while(t--)
    {
        ll n = nxt();
        ll k = nxt();

        vector<ll> ans(n,-1);
        ll c = 1;
        ll r = n;
        
        for(ll i = 0;i < k;i++)
        {
            for(ll j = i;j < n; j += k)
            {
                if(i&1) ans[j] = r--;
                else ans[j] = c++;
            }
        }

        for(auto i: ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}