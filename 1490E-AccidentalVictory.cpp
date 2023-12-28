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
    f(i, n) cout << v[i] + 1 << " ";
    cout << endl;
}
bool possible(vector<pair<ll, ll>> &v, ll mid, ll n)
{
    ll prevsum = 0;
    f(i, mid + 1) prevsum += v[i].first;
    fex(i, mid + 1, n)
    {
        if (prevsum < v[i].first)
            return false;
        prevsum += v[i].first;
    }
    return true;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        ll n = nxt();
        vector<pair<ll, ll>> v(n);
        f(i, n) v[i] = {nxt(), i};

        sort(all(v));
        vector<ll> ans;

        ll e = n - 1;
        ll s = 0;
        ll index = -1;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;

            if (possible(v, mid, n))
            {
                index = mid;
                e = mid - 1;
            }
            else
                s = mid + 1;
        }

        fex(i, index, n) ans.push_back(v[i].second);
        sort(all(ans));
        cout << ans.size() << endl;
        print(ans, ans.size());
    }
}