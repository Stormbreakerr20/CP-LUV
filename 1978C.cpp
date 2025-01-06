#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
string nline = "\n";
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

    ll k = nxt();

    if(k&1) {
        cout<<"NO"<<nline;
        return;
    }  

    vector<ll> v(n);
    f(i,n) v[i] = i + 1;

    ll i = 0;
    ll j = n-1;

    while(k > 0 && i < j)
    {
        ll maxi = (v[j] - v[i])<<1;
        if(k >= maxi)
        {
            swap(v[i],v[j]);
            i++;
            j--;
            k = k - maxi;
        }
        else j--;
    }      
    if(k <= 0)
        cout<<"YES"<<nline;
    else 
    {
        cout<<"NO"<<nline;
        return;
    }

    f(i,n)
    { 
        cout<<v[i]<<" ";
    }
    cout<<nline;

}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}