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
void tem()
{
    ll n = nxt();

    vector<ll> a(n);
    f(i, n) cin >> a[i];

    ll x = accumulate(all(a), 0ll) / n;

    for (auto &i : a)
        i = i - x;

    ll sumi = 0;

    for (auto i : a)
    {
        sumi += i;
        if (sumi < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        tem();
    }
}