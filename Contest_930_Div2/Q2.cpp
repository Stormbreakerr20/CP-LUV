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
    string a;cin>>a;
    string b;cin>>b;

    ll first_zero = n-1;
    for(ll i = 0;i<n;i++) {
        if(b[i] == '0' && i < n &&  a[i+1] != '0') {
            first_zero = i;
            break;
        }
    }
    string ans;
    for (ll i = 0; i <= first_zero; i++) {
        ans.push_back(a[i]);
    }

    for (ll i = first_zero; i < n; i++) {
        ans.push_back(b[i]);
    }

    ll ways = 0;

    ll i = 0;

    for(ll i = first_zero;i>0;i--)
    {
        if(a[i] == b[i-1]) ways++;
        else break;
    }
    ways++;
    cout<<ans<<endl<<ways<<endl;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}