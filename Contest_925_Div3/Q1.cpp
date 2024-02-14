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
void tem(ll n)
{
    string ans = "";
    // lvl 3
    if (n > 27)
    {
        ans.push_back('z');
        n = n - 26;
    }
    else
    {
        ans = "aa" + string(1,((n - 3) + 'a'));
        cout << ans <<endl;
        return;
    }

    // lvl2
    if (n > 26)
    {
        ans.push_back('z');
        n = n - 26;
    }
    else{
        ans = "a" + string(1,((n - 2) + 'a')) + ans;
        cout<<ans<<endl;
        return;
    }

    ans = string(1,((n-1) + 'a')) + ans;
    cout<<ans<<endl;
}
int main()
{
    ll t = nxt();

    while (t--)
    {
        ll n = nxt();
        tem(n);
    }
}