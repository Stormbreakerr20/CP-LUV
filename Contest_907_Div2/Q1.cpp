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
        ll m = 0;
        vector<ll> v(n+1);
        fex(i,1,n+1) v[i] = nxt();
        bool ans = 1;
        fex(i,2,n+1){
            if(i&(i-1) == 0 && i>2){
                if(v[i-1]>v[i]){
                    ans = 0;
                    break;
                }
            }
            else if(i>1 && ((i-1)&(i-2)) && v[i-1]>v[i]){
                ans = 0;
                break;
            }
        }
        if(ans) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}