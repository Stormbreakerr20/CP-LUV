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

    while(t--){
        string s;
        cin>>s;
        vector<ll> store;
        ll counta = 0;
        for(ll i = 0 ;i<s.length();i++){
            if(s[i] == 'A') counta++;
            else store.push_back(counta), counta = 0; 
        }
        store.push_back(counta);

        sort(all(store));
        ll sum = accumulate(all(store), 0ll);

        cout<<(sum - store[0])<<endl;
    }
}