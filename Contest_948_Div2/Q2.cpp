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
    if(n == 1){
        cout<<1<<nline<<1<<nline;
        return;
    }
    int x = (int)(log2(n));

    string s = bitset<64>(n).to_string().substr(64 - x - 1);

    // cout<<s<<nline;
    vector<int> ans;
    int carry = 0;

    int i = s.size() - 1;
    while(i > 0){
        if(s[i] == '1' && s[i-1] == '1' && !carry)
        {
            ans.push_back(-1);
            carry = 1;
        }
        else if(s[i] == '1' && carry){
            ans.push_back(0);
        }
        else if(s[i] == '0' && s[i-1] == '0' && carry) {
            ans.push_back(1);
            carry = 0;
        }
        else if(s[i] == '0' && s[i-1] == '1' && carry)
        {
            ans.push_back(-1);
        }
        else ans.push_back(s[i] - '0');
        i--;
    }

    if(carry && s[i] == '0') ans.push_back(1);
    else if(carry && s[i] == '1'){
        ans.push_back(0);
        ans.push_back(1);
    }
    else ans.push_back(s[i] - '0');

    cout<<ans.size()<<nline;
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<nline;
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}