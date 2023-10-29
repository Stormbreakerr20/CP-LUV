#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)

ll n,l,r,x;

inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
void rec_f(vector<ll> &v,ll index, ll &ans,vector<ll> out){
    if(index >= v.size()){
        if(out.size()>=2){
            ll sumo = accumulate(all(out),0ll);
            if(l<= sumo && sumo<=r && (*max_element(all(out)) - *min_element(all(out))) >= x) ans++;
        }
        return;
    }

    //include
    out.push_back(v[index]);
    rec_f(v,index+1,ans,out);
    out.pop_back();

    //exclude
    rec_f(v,index+1,ans,out);
}
int main()
{
    n = nxt();
    l = nxt();
    r = nxt();
    x = nxt();

    vector<ll> v(n);
    f(i,n) v[i] = nxt();

    ll ans = 0;
    rec_f(v,0,ans,{});

    cout<<ans<<endl;
}