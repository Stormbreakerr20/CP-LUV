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
    string s;
    cin>>s;
    ll dig = s.size() - 1;

    ll lower = 0;
    ll upper  = 0;

    bool zero = 0;
    for(ll i = 1;i<s.size() - 1;i++){
        if(s[i] == '0') {
            zero = 1;
            break;
        }
    }

    for(ll i = 0;i<dig;i++) {
        lower = lower * 10 + 5;
        upper = upper * 10 + 9;
    }

    // cout<<upper<<" "<<lower<<nline;
    if(zero || s[0] > '1' || s.back() == '9' || (stoll(s) > upper*2) || stoll(s) < lower*2) cout<<"NO"<<nline;
    else cout<<"YES"<<nline; 
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}