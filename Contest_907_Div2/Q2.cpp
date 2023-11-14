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
    f(i, n) cout << v[i] + 1;
    cout << endl;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        ll n = nxt();
        ll m = nxt();

        vector<ll> a(n), b(m);
        f(i, n) a[i] = nxt();
        f(i, m) b[i] = nxt();

        ll prev_proc = 0;
        vector<ll> pow_arr(31,1);
        fex(i,1,31) {
            pow_arr[i] = 2*pow_arr[i-1];
        }
        vector<ll> newb;
        newb.push_back(b[0]);
        fex(i,1,m) if(b[i] < newb.back()) newb.push_back(b[i]);
        for (auto i : newb)
        {
            f(j, n)
            {
                if (a[j] % pow_arr[i] == 0)
                {
                    a[j] += pow_arr[i-1];
                }
            }
        }

        for (auto i : a)
            cout << i << " ";
        cout << endl;
    }
}