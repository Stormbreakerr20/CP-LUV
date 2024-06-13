#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n) - 1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n) - 1; i >= s; i--)
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
ll mod = 998244353;
map<pair<ll, ll>, ll> m;

int help(vector<ll> &v, ll sum, ll i, ll &k)
{
    if (i >= v.size())
    {
        if (sum == k)
            return 1;
        return 0;
    }
    if (m.count(make_pair(sum, i)))
        return m[make_pair(sum, i)] % mod;

    ll val = sum + v[i];
    if (val >= 0)
    {
        ll a = help(v, val, i + 1, k);
        return m[make_pair(sum, i)] = ((2 % mod) * (a % mod)) % mod;
    }
    else
    {
        ll a = help(v, val, i + 1, k);
        ll b = help(v, abs(val), i + 1, k);
        return m[make_pair(sum, i)] = (a % mod + b % mod) % mod;
    }
}
void func()
{
    m.clear();
    ll n = nxt();

    vector<ll> v, a;

    f(i, n)
    {
        ll t = nxt();
        a.push_back(t);
        if (t != 0)
            v.push_back(t);
    }
    if (v.size() == 0)
    {
        ll k = 0;
        cout << help(a, 0, 0, k) << nline;
        return;
    }

    if (v.size() == 1)
    {
        cout << help(a, 0, 0, v[0]) << nline;
        return;
    }

    vector<vector<ll>> dp(v.size(), vector<ll>(2));
    dp[0][0] = v[0];
    dp[0][1] = abs(v[0]);

    // cout<<dp[0][0]<<" "<<dp[0][1]<<nline;
    for (ll i = 1; i < v.size(); i++)
    {
        if (dp[i - 1][0] == dp[i - 1][1])
        {
            dp[i][0] = dp[i - 1][0] + v[i];
            dp[i][1] = abs(dp[i - 1][1] + v[i]);
        }
        else
        {
            dp[i][1] = max(abs(dp[i - 1][0] + v[i]), abs(dp[i - 1][1] + v[i]));
            dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + v[i];
        }

        // cout<<dp[i][0]<<" "<<dp[i][1]<<nline;
    }

    ll k = max(abs(dp[v.size() - 1][0]), abs(dp[v.size() - 1][1]));

    cout << help(a, 0, 0, k) << nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}