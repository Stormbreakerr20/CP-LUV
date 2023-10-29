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
    // Divided array a into a0,1,a2,1... and 1,a1,1,a3... either half will have sum <= sum(A)/2 will take that half

    ll t = nxt();
    while (t--)
    {
        ll n = nxt();
        vector<ll> v(n);
        vector<ll> store(n);
        ll sum_even = 0;
        ll sum_odd = 0;
        f(i,n){
            v[i] = nxt();
            if(i&1) sum_odd += v[i] - 1;
            else sum_even += v[i] - 1;
        }
        ll sum_v = accumulate(all(v),0ll);
        if(2*sum_even <= sum_v){
            f(i,n){
                if(i&1) cout<<v[i]<<" ";
                else cout<<1<<" ";
            }
        }
        else{
            f(i,n){
                if(i&1) cout<<1<<" ";
                else cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
}