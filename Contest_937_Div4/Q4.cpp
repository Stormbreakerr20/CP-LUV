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
long long toBin(ll n) {
    string r;
    while(n != 0) {
        r = (n%2 == 0? "0":"1") + r;
        n = n/2;
    }
    ll num = stoi(r)*1LL;
    return num;
}
bool is_bin(ll n)
{
    while(n)
    {
        if(n%10 != 0 && n%10 != 1) return false;
        n = n/10;
    }

    return true;
}
void func(unordered_map<int,bool> m)
{
    ll n = nxt();
    if(m.find(n) == m.end()) cout<<"NO"<<nline;
    else cout<<"YES"<<nline;
}
int main()
{
    ll t = nxt();
    unordered_map<int,bool> m;
    for(int a = 1;a<=31;a++)
    {
        ll b1 = toBin(a);
        if(b1 > 100000) break;
        for(int b = 1;b<=31;b++)
        {
            ll b2 = toBin(b);
            if(b1*b2 > 100000) break;
            for(int c = 1;c<=31;c++){
                ll b3 = toBin(c);
                if(b1*b2*b3 > 100000) break;
                for(int d = 1;d<=31;d++)
                {
                    ll b4 = toBin(d);
                    if(b1*b2*b3*b4 > 100000) break;
                    for(int e = 1;e<=31;e++)
                    {
                        ll b5 = toBin(e);
                        if(b1*b2*b3*b4*b5 > 100000) break;
                        m[b1*b2*b3*b4*b5] = 1;
                    }
                }
            }

        }
    }
    while(t--)
    {
        func(m);
    }
}