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
    ll ones = 0;
    f(i,n)
    {
        cin>>v[i];
        ones += v[i];
    }

    ll i = n-1;
    while(i >= 0 && v[i] != 1) i--;
    ll j = i;

    ll ans = 0;

    while(i >= 0 && (j - i) < ones)
    {
        if(v[i]) i--;
        else{
            swap(v[i--],v[j--]);
            ans++;
        }
    }

    cout<<ans<<endl;


}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}