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
    ll t = nxt();
    while(t--)
    {
        ll n = nxt();
        ll m = nxt();
        ll k = nxt();

        set<ll> a,b;
        f(i,n) a.insert(nxt());
        f(i,m) b.insert(nxt());

        ll ac = 0;
        ll bc = 0;
        bool ans = 1;
        vector<bool> visited(k,0);
        for(auto i:a)
        {
            if( i <= k ) {
                ac++;
                visited[i-1] = 1;
            }
        }
        for(auto i:b)
        {
            if( i <= k ) {
                bc++;
                visited[i-1] = 1;
            }
        }
        for(auto i:visited){
            if(!i){
                ans = 0;
                break;
            }
        }

        if(ac < k/2 || bc < k/2 || !ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}