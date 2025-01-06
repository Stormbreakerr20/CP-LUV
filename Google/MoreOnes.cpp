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
ll ans;
void merge(vector<ll> &v,ll s,ll e)
{
    ll mid = (s+e)>>1;

    vector<ll> a(v.begin() + s,v.begin() + mid + 1);
    vector<ll> b(v.begin() + mid + 1,v.begin() + e + 1);

    ll i = 0;
    ll j = 0;
    while(i < a.size() && j < b.size())
    {
        if(a[i] > b[j])
        {
            ans += a.size() - i;
            v[s++] = b[j++];
        }else{
            v[s++] = a[i++];
        }
    }

    while(i < a.size())
    {
        v[s++] = a[i++];
    }   
    while(j < b.size())
    {
        v[s++] = b[j++];
    } 
}
void split(vector<ll> &v,ll s,ll e)
{
    if(s >= e) return;
    ll mid = (e+s)>>1;

    split(v,s, mid);
    split(v,mid + 1,e);

    merge(v,s,e);
}
void func()
{
    ans = 0;
    ll n = nxt();
    string s;
    cin>>s;

    vector<ll> pref(n);
    pref[0] = s[0] == '0' ? -1 : 1;
    ll extra = pref[0] == 1;
    for(int i = 1;i<n;i++)
    {
        pref[i] = pref[i - 1] + (s[i] == '0' ? -1 : 1);
        extra += (pref[i] > 0);
    }

    // count inversion
    reverse(all(pref));
    split(pref,0,n - 1);

    // for(auto i:pref) cout<<i<<endl;
    cout<<ans + extra<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}