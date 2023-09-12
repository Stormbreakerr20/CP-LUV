#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
#include <climits>
#include <algorithm>
using namespace std;
#define ll long long

#define all(x) (x).begin(), (x).end()

inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}

void f()
{
    ll n = nxt();

    vector<pair<ll, ll>> v;

    for (int i = 0; i < n; i++)
        v.push_back({nxt(), i});

    sort(all(v));

    vector<ll> ans(n);

    for (int i = 0; i < n; i++)
        ans[v[i].second] = n - i;

    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}

int main()
{
    ll t = nxt();

    while (t--)
    {
        f();
    }
}