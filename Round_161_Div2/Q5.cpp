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
void print(vector<ll> v, ll n)
{
    f(i, n) cout << v[i];
    cout << endl;
}
vector<int> recf(ll n)
{
    if(n == 2) return {-1000000000};

    if(n&1)
    {
        vector<int> v = recf(n-1);
        v.push_back(*min_element(all(v)));
        return v;
    }
    else{
        vector<int> v = recf(n/2);
        v.push_back(*max_element(all(v)) + 1);
        return v; 
    }

}
int main()
{
    ll t = nxt();

    while(t--)
    {
        ll n = nxt();
        vector<int> v = recf(n);
        cout<<v.size()<<endl;
        for(auto i : v) cout<<i<<" ";
        cout<<endl;
    }
}