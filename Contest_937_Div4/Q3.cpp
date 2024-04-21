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
    string s;cin>>s;
    ll hr = stoi(s.substr(0,2));

    ll newhr = 0;
    bool pm = 0;
    if(hr == 0) newhr = 12;
    else if(hr == 12){
        newhr = 12;
        pm = 1;
    }
    else if(hr >= 1 && hr <= 11) newhr = hr;
    else{
        newhr = hr - 12;
        pm = 1;
    }
    string ans = (newhr < 10 ? "0" + to_string(newhr) : to_string(newhr)) + ":" + s.substr(3,2) + (pm ? " PM": " AM");

    cout<<ans<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}   