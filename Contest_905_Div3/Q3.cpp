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
    while (t--)
    {
        ll n = nxt();
        ll k = nxt();
        ll toadd_mini = LLONG_MAX;
        ll odd = 0;
        ll even = 0;
        bool got = 0;
        f(i, n)
        {
            ll inp = nxt();
            odd += inp & 1;
            even += !(inp & 1);
            if (inp % k == 0 && !got)
                cout<<0<<endl,got=1;
            else
                toadd_mini = min(toadd_mini, k - inp % k);
        }
        if (!got)
        {
            if (k != 4)
                cout << toadd_mini << endl;
            else
            {
                if(even>1) cout<<0<<endl;
                else if(even == 1 && odd) cout<<1<<endl;
                else if(odd == 1 || toadd_mini == 1) cout<<toadd_mini<<endl;
                else cout<<2<<endl;
            }
        }
    }
}