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
int main()
{
    ll t = nxt();
    multiset<ll> maxi;
    multiset<ll> mini;
    while (t--)
    {
        char c;
        cin >> c;
        if (c == '+')
        {
            mini.insert(nxt());
            maxi.insert(nxt());
        }
        else
        {
            // Erase 1 occurance from multiset 
            mini.erase(mini.find(nxt()));
            maxi.erase(maxi.find(nxt()));
        }

        if ( maxi.size() > 1 && *(maxi.begin()) < *(mini.rbegin()) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}