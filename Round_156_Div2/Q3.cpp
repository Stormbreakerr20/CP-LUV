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
        string s;
        cin >> s;
        ll pos = nxt()-1;
        string ans = "";
        ll x,y;

        for(ll i = 0;i<s.size();i++)
        {
            ll len = s.size() - i;
            if(pos < len) {
                x = i;
                y = pos;
                break;
            }
            pos -= len;
        }
        for(auto i: s){
            while(x > 0 && !ans.empty() && ans.back()>i){
                ans.pop_back();
                x--;
            }
            ans += i;
        }
        cout<<ans[y];
    }
}