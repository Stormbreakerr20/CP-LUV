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
    ll m = nxt();

    ll p = 1;
    deque<ll> a(n);

    f(i, n)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector<ll> v;
    for (auto i : s)
    {
        if (i == 'L')
        {
            v.push_back(a.front());
            a.pop_front();
        }
        else
        {
            v.push_back(a.back());
            a.pop_back();
        }
    }

    reverse(all(v));
    vector<ll> ans;
    for (auto i : v)
    {
        p = p * i;
        p = p % m;
        ans.push_back(p);
    }

    reverse(all(ans));
    for(auto i:ans) cout<<i<<" ";

    cout << endl;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}