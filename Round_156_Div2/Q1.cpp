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
        if (n < 7)
            cout << "NO" << endl;
        else
        {
            if (n % 3 == 0)
            {
                if(n/3 == 3) cout<<"NO"<<endl;
                else if((n/3)%3 == 0){
                    cout<<"YES"<<endl<<"1 4 "<<n-5<<endl;
                }
                else
                {
                    cout << "YES" << endl
                         << n / 3 << " " << (n / 3 + 3) << " " << (n / 3 - 3) << endl;
                }
            }
            else
            {
                cout <<"YES"<<endl<< "1 2 " << (n - 3) << endl;
            }
        }
    }
}