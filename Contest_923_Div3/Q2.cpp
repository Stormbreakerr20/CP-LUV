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
int main()
{
    ll t = nxt();
    while(t--)
    {
        ll n = nxt();
        string ans = "";

        map<ll,stack<char>> m;
        for(int i = 0;i<26;i++) m[0].push(i + 'a');

        for(ll i = 0;i<n;i++)
        {
            ll occ = nxt();
            ll ele = m[occ].top();

            m[occ].pop();
            ans.push_back(ele);
            m[occ + 1].push(ele);
        }

        cout<<ans<<endl;
    }
}