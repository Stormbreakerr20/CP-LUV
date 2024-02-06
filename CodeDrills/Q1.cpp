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
    f(i, n) cout << v[i] + 1;
    cout << endl;
}
int main()
{
    ll t = nxt();
    while(t--){
        ll n = nxt();
        vector<ll> a(1000,0),b(n,0);
        f(i,n) a[nxt()]++;
        f(i,n) b[i] = nxt();

        ll prev = -1;
        bool got = 0;
        f(i,n){
            ll ce = b[i];
            got = 0;
            for(ll j = ce;j>0;j--){
                if(prev == -1 && a[j]){
                    prev = j;
                    got = 1;
                    a[j]--;
                    j = 0;
                }
                else if(a[j] && prev != j){
                    got = 1;
                    a[j]--;
                    prev = j;
                    j = 0;
                }
            }
            if(got == 0) break;
        }
        if(got == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
}