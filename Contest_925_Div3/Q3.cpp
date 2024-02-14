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
    ll i = 0;
    ll j = n - 1;
    vector<ll> a(n);
    f(i, n) cin >> a[i];

    // eq
    if (a[i] == a[j])
    {
        ll y = a[i];
        while(i < n && a[i] == y) i++;
        while(j >= 0 && a[j] == y) j--;
        if (i > j)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (j - i + 1) << endl;
            return;
        }
    }
    else
    {
        ll ans = LLONG_MAX;
        // left
        while (i < n && a[i] == a[i + 1])
            i++;
        i++;
        ans = min(ans, n - i);
        // right;
        while (j > 0 && a[j] == a[j - 1])
            j--;
        j--;
        ans = min(ans, j + 1);

        cout << ans << endl;
    }
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        tem();
    }
}