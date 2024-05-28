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
ll func1(vector<bool>& rows,vector<bool>&cols,ll& n)
{

    bool pos = 0;
    ll ans = 0;
    for(ll s = 1;s<=n;s++)
    {
        for(ll e = 1;e<=n;e++)
        {
            if(rows[s] && cols[e])
            {
                rows[s] = 0;rows[e] = 0;
                cols[s] = 0;cols[e] = 0;

                ans = ans + func1(rows,cols,n);

                rows[s] = 1;rows[e] = 1;
                cols[s] = 1;cols[e] = 1;
                pos = 1;
            }
        }
    }

    if(pos == 0) return 1;
    return ans;
}
void func()
{
    ll n = nxt();
    ll k = nxt();

    vector<bool> rows(n+1,1);
    vector<bool> cols(n+1,1);

    for(ll i = 0;i<k;i++)
    {
        int a = nxt();
        int b = nxt();
        rows[a] = 0;rows[b] = 0;
        cols[b] = 0;cols[a] = 0;
    }

    cout<<func1(rows,cols,n);
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}