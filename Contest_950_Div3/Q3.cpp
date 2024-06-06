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
void func()
{
    ll n = nxt();
    vector<ll> a(n), b(n);
    f(i, n) cin >> a[i];
    f(i, n) cin >> b[i];

    ll m = nxt();

    vector<ll> ms(m);
    f(i, m) cin >> ms[i];

    map<ll, ll> uneq,eq;
    f(i, n)
    {
        if (a[i] == b[i])
            eq[b[i]]++;
        else
        {
            // cout<<b[i]<<nline;;
            uneq[b[i]]++;
        }
    }
    reverse(all(ms));

    for (auto &i : ms)
    {
        if (uneq[i] > 0)
        {
            uneq[i]--;
            if (uneq[i] == 0)
                uneq.erase(i);
            i = -1;
        }
        if (uneq[i] == 0)
            uneq.erase(i);
        else
            i = -2;
    }
    bool pos = ms[0] == -1 || eq[ms[0]] ? 0 : 1;

    if (uneq.size() || pos)
        cout << "NO" << nline;
    else
        cout << "YES" << nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}