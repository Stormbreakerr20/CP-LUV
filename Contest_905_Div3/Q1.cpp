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
        string s;
        cin>>s;
        ll ans = 4;
        if(s[0] == '0') ans += 9;
        else ans += s[0] - '1';
        f(i,3){
            ll a = s[i] == '0'?10:s[i] - '0';
            ll b = s[i + 1] == '0'?10:s[i+1] - '0';

            ans += abs(a-b);
        }

        cout<<ans<<endl;
    }
    
}