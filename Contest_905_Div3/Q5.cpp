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

        vector<ll> v(n);
        ll op = 0;
        ll curr = 0;
        f(i,n){
            v[i] = nxt();
            if(i){
                ll cnt = 0;
                ll k = v[i];
                while(v[i-1] > k) {
                    k*=2;
                    cnt++;
                }
                while(v[i - 1]*2 <= k && curr){
                    v[i - 1] *= 2;
                    curr--;
                }
                curr = curr + cnt;
                op += curr;
            }
        }
        cout<<op<<endl;
    }
}