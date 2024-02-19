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
    f(i, n) cout << v[i];
    cout << endl;
}
void func()
{
    ll n = nxt();
    ll ones = 0;
    bool tri = 0;
    vector<vector<char>> v(n,vector<char> (n));

    for(ll i = 0;i<n;i++)
    {
        ll cnt = 0;
        for(ll j = 0;j<n;j++)
        {
            char inp;cin>>inp;
            if(inp == '1') cnt++;
        }
        if(ones > 0 && (cnt != ones && cnt != 0)) tri = 1; 
        else if(ones == 0 && cnt != 0) ones = cnt;
    }

    if(tri) cout<<"TRIANGLE"<<endl;
    else cout<<"SQUARE"<<endl;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}