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
bool f_x(ll x, ll money, vector<pair<ll, ll>> v, ll req_b, ll req_c, ll req_s)
{
    return max(0ll, x * req_b - v[0].first) * v[0].second + max(0ll, x * req_s - v[1].first) * v[1].second + max(0ll, x * req_c - v[2].first) * v[2].second <= money;
}
int main()
{
    ll req_b = 0;
    ll req_c = 0;
    ll req_s = 0;

    string st;
    cin >> st;
    for (auto i : st)
    {
        if (i == 'B')
            req_b++;
        else if (i == 'C')
            req_c++;
        else
            req_s++;
    }
    vector<pair<ll, ll>> v(3, {0, 0});
    // Have
    for (int i = 0; i < 3; i++)
        v[i].first = nxt();
    // price
    for (int i = 0; i < 3; i++)
        v[i].second = nxt();

    ll money = nxt();

    ll e = 100000000000000;
    ll s = 0;

    ll ans = 0;

    // function_x = sigma ( max( 0,x_cakes * req_i - have_i )*price_i )

    while (s <= e)
    {
        ll mid = s + (e - s) / 2;
        if (f_x(mid, money, v, req_b, req_c, req_s))
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    cout << ans << endl;
}
