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
        ll m = nxt();

        string a, b;
        cin >> a >> b;

        bool f = 0;

        for(ll i = 0;i<10;i++){
            if(a.size()>=b.size() && a.find(b) != -1){
                cout<<i<<endl;
                f =1;
                break;
            }
            a += a;
        }
        if(!f)cout<<-1<<endl;
    }

}