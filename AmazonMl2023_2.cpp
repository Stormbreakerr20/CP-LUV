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

    ll sum = 0;
    vector<ll> v(n);
    map<ll,ll> m;
    f(i,n) {
        cin>>v[i];
        sum += v[i];
        m[v[i]]++;
    }

    sort(all(v));

    //mean 
    double mean = (double)sum/n;
    cout<<fixed<<setprecision(6)<<mean<<", ";

    //median
    double median;
    if(n&1) {
        median = (double)v[n/2];
    }
    else {
        median = (double)(v[n/2] + v[n/2 - 1])/2;
    }
    cout<<fixed<<setprecision(6)<<median<<", ";

    //mode
    ll mode = v[0];

    for(auto i:m) {
        if(i.second > m[mode]) mode = i.first;
    }

    cout<<mode<<endl;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}