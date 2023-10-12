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
        ll a,b,c;
        cin>>a>>b>>c;
        ll mi = min({a,b,c});
        if(a ==b && b==c && a==c) cout<<"YES"<<endl;
        else{
            ll pos = 1;
            vector<ll> v = {a,b,c};
            sort(all(v));
            ll op = 3;
            for(ll i = 2;i>=0;i--){
                while(v[i] != mi){
                    op--;
                    if(op<0 || v[i] - mi<0){
                        cout<<"NO"<<endl;
                        pos = 0;
                        break;
                    }
                    ll t = v[i] - mi;
                    if(t < mi){
                        t = mi;
                        mi = t;
                    }
                    else v[i] = t;
                }
                if(!pos) break;
            }
            if(pos) cout<<"YES"<<endl;
        }
    }
}