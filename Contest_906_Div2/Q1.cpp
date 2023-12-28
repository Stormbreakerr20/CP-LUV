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
int main()
{
    ll t = nxt();
    while (t--)
    {
        ll n = nxt();
        unordered_map<ll, ll> m;
        f(i, n)
        {
            m[nxt()]++;
        }

        if (m.size() == 1)
            cout << "YES" << endl;
        else if (m.size() > 2)
            cout << "NO" << endl;
        else
        {
            if (n & 1)
            {
                bool half = 0;
                bool half_p = 0;
                for (auto i : m)
                {
                    if (i.second == n / 2 && !half)
                        half = 1;
                    else if (i.second == n / 2 + 1 && !half_p)
                        half_p = 1;
                }
                if (half && half_p)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                bool nohalf = 0;
                for (auto i : m)
                {
                    if (i.second != n / 2) nohalf = 1;
                }
                if(nohalf) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
        }
    }
}