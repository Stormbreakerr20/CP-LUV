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
    while(t--){
        int n = nxt();
        vector<ll> a(n);
        f(i,n) cin>>a[i];
        vector<ll> closest(n);
        f(i,n){
            if(i > 0) {
                if(abs(a[i] - a[i-1]) < abs(a[i] - a[i+1])) closest[i] = i-1;
                else closest[i] = i+1;
            }
            else closest[i] = i+1;
        }
        // print(closest,n);

        vector<ll> df(n),dr(n);

        for(int i = 1;i<n;i++)
        {
            df[i] = df[i-1] + (closest[i-1] == i ? 1 : abs(a[i] - a[i-1]));
            dr[i] = dr[i-1] + (closest[i] == i-1 ? 1 : abs(a[i] - a[i-1]));
        }

        // for(int i = 0;i<n;i++) cout<<df[i]<<" ";
        // cout<<endl;
        // for(int i = 0;i<n;i++) cout<<dr[i]<<" ";
        // cout<<endl;

        int q = nxt();
        while(q--){
            ll start = nxt()-1, end = nxt()-1;
            ll ans = 0;

            if(start < end){
                cout<<df[end] - df[start]<<endl;
            }
            else{
                cout<<dr[start] - dr[end]<<endl;
            }
            // cout<<ans<<endl;
        }
    }
}