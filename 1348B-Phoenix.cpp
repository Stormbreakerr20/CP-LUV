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
        ll k = nxt();
        // We must observe periodicity wrt k in array
        set<ll> s;
        for( ll i = 0;i<n;i++){
            s.insert(nxt());
        }
        if(s.size() > k) {
            // Can't write as period of k
            cout<<-1<<endl;
        }
        else{
            vector<ll> v(all(s));
            while(v.size()<k) v.push_back(1);
            cout<<(v.size() * n)<<endl;
            for(ll i = 0;i<n;i++)
            {
                for(auto i:v) cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}