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
        string s;
        cin>>s;

        ll ans = 0;

        ll i = 0;
        while(i<n){
            if(s[i] == 'B'){
                ans++;
                i+=k-1;
            }
            i++;
        }

        cout<<ans<<endl;
    }
}