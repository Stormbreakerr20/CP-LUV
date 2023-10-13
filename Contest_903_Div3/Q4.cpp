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
void Euler_Sieve_PrimeFactors_count(ll n, unordered_map<ll, ll> &m)
{
    for (int j = 2; j <= sqrt(n); j++)
    {
        while (n % j == 0)
        {
            n /= j;
            m[j]++;
        }
    }
    if (n > 1)
        m[n]++;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        unordered_map<ll, ll> m;
        ll n = nxt();
        for (ll i = 0; i < n; i++)
        {
            ll k = nxt();
            if (k != 1)
                Euler_Sieve_PrimeFactors_count(k, m);
        }
        bool k = 0;
        for (auto i : m)
        {
            if (i.second % n != 0)
            {
                cout << "NO" << endl;
                k = 1;
                break;
            }
        }
        if (!k)
            cout << "YES" << endl;
    }
}