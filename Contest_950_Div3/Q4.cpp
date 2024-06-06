#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n) - 1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n) - 1; i >= s; i--)
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

bool rem(int x,vector<ll>&a)
{
    if(x < 0 || x >= a.size()) return false;
    vector<ll> b;
    f(i,a.size() - 1)
    {
        if(i == x) continue;
        else if(i + 1 == x ) {
            if(i + 2 < a.size()) b.push_back(__gcd(a[i],a[i+2]));
            i++;
        }
        else b.push_back(__gcd(a[i],a[i+1]));
    }

    // f(i,a.size() - 1) cout<<b[i]<<" ";
    // cout<<nline;
    f(i,a.size()-3) if(b[i] > b[i+1]) return false;

    return 1; 
}
void func()
{
    ll n = nxt();

    vector<ll> a(n);
    f(i, n) cin >> a[i];

    vector<ll> b(n - 1);
    f(i, n - 1) b[i] = __gcd(a[i], a[i + 1]);

    f(i, n-2)
    {   
        if(b[i] > b[i+1])
        {
            if(rem(i-1,a) || rem(i,a) || rem(i+1,a) || rem(i+2,a) || rem(i + 3,a)) {
                cout<<"YES"<<nline;
                return;
            }
            else{
                cout<<"NO"<<nline;
                return;
            }
        }
    }

    cout<<"YES"<<nline;

}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}