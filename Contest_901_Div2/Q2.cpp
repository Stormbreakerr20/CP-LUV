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
int main()
{
    ll t = nxt();
    while(t--){
        ll n = nxt();
        ll m = nxt();
        ll k = nxt();
        vector<ll> a(n),b(m);
        for(ll i = 0;i<n;i++) a[i] = nxt();
        for(ll i = 0;i<m;i++) b[i] = nxt();
        sort(all(b));
        sort(all(a));

        if(a[0]<b[m-1]) swap(b[m-1],a[0]); 
        sort(all(b));
        sort(all(a));

        if(k%2 == 0 && a[n-1]>b[0]){
            swap(a[n-1],b[0]);
        }
        
        cout<<(accumulate(all(a),0ll))<<endl;

    }
}