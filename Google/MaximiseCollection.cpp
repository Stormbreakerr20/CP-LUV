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
    set<pair<ll,ll>> s;
    f(i,n) {
        s.insert({nxt(),i+1});
    }
    // for(auto i:m) cout<<i.first<<" "<<i.second;

    ll q = nxt();

    f(i,q)
    {
        ll c = nxt();
        ll k = nxt();

        vector<bool> v(n + 1,1);
        f(i,k) v[nxt()] = 0;

        ll sum = 0;
        ll cnt = 0;
        for(auto i:s)
        {
            if(v[i.second] && i.first + sum <= c) {
                sum += i.first;
                cnt++;
                if(sum >= c) break;
            }
        }

        cout<<cnt<<nline;
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