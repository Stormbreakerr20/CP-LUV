#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
string nline = "\n";
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
    ll m = nxt();

    vector<vector<char>> v(n, vector<char> (m));

    int maxhashi = 0;
    int maxhashj = 0;
    f(i,n)
    {
        f(j,m)
        {
            cin>>v[i][j];
        }
    }
    int cnt = 0;
    f(i,n)
    {
        int t = 0;
        f(j,m)
        {
            t += (v[i][j] == '#');
        }
        if(t > cnt) {
            maxhashi = i;
            cnt = t;
        }
    }
    cnt = 0;
    f(j,m)
    {
        int t = 0;
        f(i,n)
        {
            t += (v[i][j] == '#');
        }
        if(t > cnt) {
            maxhashj = j;
            cnt = t;
        }
    }
    
    cout<<maxhashi + 1<<" "<<maxhashj + 1<<nline;


}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}