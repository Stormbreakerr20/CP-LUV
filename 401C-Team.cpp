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
    ll n = nxt();
    ll m = nxt();
    string s = "";
    if((n-1) <=m && m<= 2*(n+1)){
        if(m == n-1 || m == n){
            f(i,n+m){
                if(i&1) cout<<"1";
                else cout<<"0";
            }
        }
        else{
            ll count1 = m;
            f(i,2*(n)){
                if(i&1) s+="0";
                else s+="1",count1--;
            }
            for(auto i:s){
                if(i == '1' && count1) cout<<"1",count1--;
                cout<<i;
            }
            while(count1--) cout<<"1";
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}