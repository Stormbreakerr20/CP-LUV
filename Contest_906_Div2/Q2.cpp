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
    f(i, n) cout << v[i] + 1 <<" ";
    cout << endl;
}
int main()
{
    ll t =nxt();
    while(t--){
        ll n = nxt();
        ll m = nxt();
        string s;
        cin>>s;
        string t;
        cin>>t;

        bool t_bad = 0;
        f(i,m-1){
            if(t[i] == t[i+1]){
                t_bad = 1;
                break;
            }
        }
        bool s_bad = 0;
        f(i,n-1){
            if(s[i] == s[i+1]){
                s_bad = 1;
                if( !t_bad && s[i] != t[0] && s[i+1] != t[m-1]) s_bad = 0;
            }
            if(s_bad) break;
        }
        if(s_bad) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}