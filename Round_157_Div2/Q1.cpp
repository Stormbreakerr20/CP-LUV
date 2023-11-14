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
        ll x = nxt();
        ll y = nxt();
        ll k = nxt();

        if(x >= y) cout<<x<<endl;
        else{
            if(x+k >= y) cout<<y;
            else cout<<(x + k + 2*(y - (x+k)));
            cout<<endl;
        }
    }
}