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

        if(k == 1) cout<<1;
        else if(k == 2){
            if(m<=n) cout<<m;
            else cout<<(n + (m-n)/n);
        }
        else if(k == 3){
            if(m<=n) cout<<0;
            else cout<<(m - n - (m-n)/n);
        }
        else cout<<0;
        cout<<endl;
    }
}