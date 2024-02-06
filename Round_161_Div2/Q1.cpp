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
    f(i, n) cout << v[i] + 1;
    cout << endl;
}
int main()
{
    int t = nxt();
    while(t--)
    {
        int n = nxt();
        string a,b,c;
        cin>>a>>b>>c;
        bool ans = 0;
        f(i,n){
            if((a[i] != c[i] && b[i] != c[i])){
                ans = 1;   
            }
        }

        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}