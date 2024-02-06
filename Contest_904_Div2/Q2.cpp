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
        ll i,j;

        string s;
        cin>>s;
        ll ans = 0;

        reverse(all(s));

        for(i=j= 0;i<n;i++){
            if(s[i] == '1'){
                for(j = max(j,i) + 1;j<n && s[j] == '1';j++);
                if(j == n) break;
                ans += j-i;
                swap(s[i],s[j]);
            }
            cout<<ans<<" ";
        }
        for(;i<n;i++) cout<<-1<<" ";
        cout<<endl;
    }
}