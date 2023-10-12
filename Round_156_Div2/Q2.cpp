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
double d(pair<ll,ll> & a,pair<ll,ll> &b){
    return sqrt(pow(a.first - b.first,2) + pow(a.second - b.second,2));
}
int main()
{
    ll t = nxt();
    while(t--){
        pair<ll,ll> p,a,b,o = {0,0};
        cin>>p.first>>p.second;
        cin>>a.first>>a.second;
        cin>>b.first>>b.second;

        cout<<setprecision(10);

        cout<< min({
            max(d(a,p),d(a,o)),
            max(d(b,p),d(b,o)),
            max({d(a,o),d(a,b)/2,d(b,p)}),
            max({d(b,o),d(a,b)/2,d(a,p)}),
        });
        cout<<endl;
    }
}