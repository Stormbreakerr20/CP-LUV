#include <bits/stdc++.h>
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
    ll k = nxt();
    string s;
    cin >> s;

    vector<ll> small(26), caps(26);
    for (auto i : s)
    {
        if (i >= 'a' && i <= 'z')
            small[i - 'a']++;
        else
            caps[i - 'A']++;
    }
    ll ans = 0;
    for (int i = 0; i < 26; i++)
    {
        ll max_occ = max(small[i], caps[i]);
        ll min_occ = min(small[i], caps[i]);
        if (max_occ - min_occ > 1)
        {
            while (max_occ - min_occ > 1 && k)
            {
                max_occ--, min_occ++, k--;
            }
        }
        ans += min_occ;
    }

    cout<<ans<<endl;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        f();
    }
}