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
ll dist(pair<ll, ll> &a, pair<ll, ll> &b){
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));

}
int main()
{
    ll t = nxt();
    while(t--){
        ll n = nxt();
        vector<ll> v(2*n);
        f(i,2*n) v[i] = nxt();

        ll s = 0;
        ll path = 0;

        sort(all(v));

        f(i,n-1){
            path += abs(v[i] - v[i+1]) + abs(v[i + n] - v[i + n + 1]);   
        }
        cout<<path<<endl;
        f(s,n){
            cout<<v[s]<<" "<<v[s + n]<<endl;
        }
    }
}