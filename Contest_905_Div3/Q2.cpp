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

        string s;
        cin>>s;
        bool got = 0;
        sort(all(s));
        if(n-k == 1) cout<<"YES"<<endl;
        else{
            ll left = n - k;
            for(ll i = 0;i<n;i++){
                if(i<n-1 && s[i] == s[i+1] && left>1) left-=2,i++;
                else if(left&1) left--;
                if(left == 0){
                    got = 1;
                    break;
                }
            }
            if(got) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}