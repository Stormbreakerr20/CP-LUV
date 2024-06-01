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
    ll m = nxt();

    ll len = n + m + 1;

    vector<pair<ll, ll>> a(len); // pair = prog, tester skills

    vector<pair<ll, ll>> prog, tester; // skill,index

    for (auto &x : a)
        cin >> x.first;
    for (auto &x : a)
        cin >> x.second;

    // either get n + 1 prog so we have spare prog ready while counting or get m + 1 testers for same
    f(i, len)
    {
        // last value of prog/tester array will have spare programmer/tester

        if (prog.size() == n + 1)
        {
            tester.push_back(make_pair(a[i].second, i));
            continue;
        }
        if (tester.size() == m + 1)
        {
            prog.push_back(make_pair(a[i].first, i));
            continue;
        }

        if (a[i].first > a[i].second)
            prog.push_back(make_pair(a[i].first, i));
        else
            tester.push_back(make_pair(a[i].second, i));
    }

    ll sum = 0;
    for (auto i : prog)
        sum += i.first;
    for (auto i : tester)
        sum += i.first;

    // we have sum of all n + m + 1, now just need to subtract
    vector<ll> ans(len);

    if (prog.size() == n + 1)
    {
        for (auto i : prog)
        {
            ans[i.second] = sum - i.first;
        }
        // handling testers
        for (auto i : tester)
        {
            ll extra_prog = prog.back().second;
            ans[i.second] = sum - i.first + (a[extra_prog].second - a[extra_prog].first);
        }
    }
    else
    {
        for (auto i : tester)
        {
            ans[i.second] = sum - i.first;
        }
        // handling prog
        for (auto i : prog)
        {
            ll extra_tester = tester.back().second;
            ans[i.second] = sum - i.first + (a[extra_tester].first - a[extra_tester].second);
        }
    }

    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<nline;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}