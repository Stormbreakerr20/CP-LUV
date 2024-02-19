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
    string s;
    cin >> s;

    ll i = 0;

    ll cnt = 0;
    while (i < n && s[i] != '*')
    {
        if (s[i] == '@')
        {
            cnt++;
        }
        if (i + 1 < n && s[i + 1] != '*')
            i++;
        else if (i + 2 < n && s[i + 2] != '*')
            i += 2;
        else
            break;
    }

    cout<<cnt<<endl;
}
int main()
{
    ll t = nxt();

    while (t--)
    {
        func();
    }
}