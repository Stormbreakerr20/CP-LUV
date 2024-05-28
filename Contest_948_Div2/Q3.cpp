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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll LCM(ll a, ll b)
{
    ll greater = max(a, b);
    ll smallest = min(a, b);
    for (ll i = greater;; i += greater)
    {
        if (i % smallest == 0)
            return i;
    }
}

void func(vector<ll> &a, ll currlcm, ll currlen, ll &ans, ll i)
{
    if (i >= a.size())
        return;

    // take
    ll newlcm;
    if (currlcm == -1)
        newlcm = a[i];
    else
        newlcm = LCM(currlcm, a[i]);

    // cout<<currlcm<<" "<<a[i]<<" "<<newlcm<<nline;

    if (find(all(a), newlcm) == a.end())
        ans = max(ans, currlen + 1);

    func(a, newlcm, currlen + 1, ans, i + 1);

    // nottake
    func(a, currlcm, currlen, ans, i + 1);
}
void func()
{
    ll n = nxt();
    vector<ll> a(n);
    f(i, n) cin >> a[i];

    ll ans = 0;
    // func(a,-1,0,ans,0);// rec solution

    // DP

    // if at any point lcm > max_element of array then ans is n; (we take all elements of array)

    ll maxi = *max_element(all(a));
    ll lcm = 1;

    for (auto i : a)
    {
        lcm = LCM(i, lcm);
        if (lcm > maxi)
        {
            cout << n << nline;
            return;
        }
    }

    // dp[lcm] = max length subseq having LCM as lcm

    map<ll, ll> dp, newdp;

    dp[1] = 0; // base 0 size array has lcm = 1

    for (auto i : a)
    {
        for (auto k : dp)
        {
            ll lcm_ = LCM(k.first, i);
            newdp[lcm_] = max(k.second + 1, newdp[lcm_]);
            cout<<lcm<<nline;
        }
        dp = newdp;
    }

    set<ll> s(all(a));
    for (auto i : dp)
    {
        if (!s.count(i.first))
            ans = max(i.second, ans);
    }
    cout << ans << nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}