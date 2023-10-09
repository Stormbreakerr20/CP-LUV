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
bool compare(pair<ll,ll>& a,pair<ll,ll> & b){
    if(a.second == b.second) return a.first>b.first;
    return a.second < b.second;
}
int main()
{
    ll t = nxt();
    while(t--){
        ll n = nxt();
        ll p = nxt();

        vector<ll> a(n),b(n);
        f(i,n) a[i] = nxt();
        f(i,n) b[i] = nxt();

        vector<pair<ll,ll>> v(n);

        f(i,n) v[i] = {b[i],a[i]};

        sort(all(v));

        ll cost = p;
        ll left = n - 1;
        ll i = 0;
        
        while(i<n && left>0){
            if(v[i].first >= p) break;
            else{
                if(left >= v[i].second){
                    cost += v[i].second*v[i].first;
                    left -= v[i].second;
                }
                else{
                    cost += (v[i].first)*left;
                    left = 0;
                    break;
                }
                i++;
            }
        }
        cost += left*p;
        cout<<cost<<endl;
    }
}