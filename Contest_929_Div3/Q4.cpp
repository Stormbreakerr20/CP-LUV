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
    vector<ll> v(n);
    f(i,n) cin>>v[i];

    sort(all(v));
    ll i = 0;
    while(i + 1 < n && v[i] == v[i+1]) i++;
    i++;

    if(i == 1) cout<<"YES"<<endl;
    else{
        for(ll k = i;k<n;k++)
        {
            if(v[k]%v[0]){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
    }
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}