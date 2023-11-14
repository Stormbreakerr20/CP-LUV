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
    f(i, n) cout << v[i] + 1;
    cout << endl;
}
int main()
{
    string s;
    cin>>s;
    ll n = stoi(s);
    vector<ll> store;
    while(n>=10){
        string m = "";
        for(auto i:s){
            if(i>'0') m+="1";
            else m+="0";
        }
        n = stoi(s) - stoi(m);
        s = to_string(n);
        store.push_back(stoi(m));
    }
    if(n >= 1) {
        while(n--) store.push_back(1);
    }

    cout<<store.size()<<endl;
    for(auto i:store)cout<<i<<" ";
    cout<<endl;


}