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
    ll q = nxt();

    vector<ll> v(n);
    vector<pair<ll,ll>> pref(n + 1);
    pref[0] = {0,0};
    f(i, n) {
        cin >> v[i];
        pref[i + 1] = {v[i] + pref[i].first,pref[i].second + (v[i] == 1)};
    }

    while (q--)
    {
        ll l = nxt();
        ll r = nxt();

        if (l == r)
        {
            cout << "NO" << endl;
            continue;
        }
        n = r - l + 1;
        l--;
        ll cnt = pref[r].second - pref[l].second;
        ll sum = pref[r].first - pref[l].first;
        
        sum -= 2*cnt;  
 
        if (sum >= n - cnt)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}