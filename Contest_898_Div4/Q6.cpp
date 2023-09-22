#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
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

        vector<ll> a(n);
        vector<ll> b(n);

        for(int i = 0;i<n;i++) a[i] = nxt();
        for(int i = 0;i<n;i++) b[i] = nxt();

        ll i = 0,j= 0;
        ll sum = 0;
        ll ans = 0;

        while(i<n){
            if(i>j) {
                sum = 0;
                j = i;
            }

            while(j<n && sum + a[j] <= k && (i == j || b[j-1]%b[j] == 0)){
                sum+=a[j++];
            }
            ans = max(ans,j-i);
            sum-=a[i++];
        }

        cout<<ans<<endl;
    }
}