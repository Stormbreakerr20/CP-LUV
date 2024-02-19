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
void func()
{
    ll n= nxt();

    ll sum = 0;

    string s;
    cin>>s;

    for(auto i:s) sum += (i - '0');
    ll carry = 0;
    vector<int> ans;

    for(ll i = s.size()-1;i>=0;i--)
    {
        ll csum = sum + carry;
        carry = csum / 10;
        ans.push_back(csum%10);
        sum -= (s[i] - '0');
    }
    
    ans.push_back(sum + carry);
    ll i = ans.size() - 1;
    while(i >=0 && ans[i] == 0) i--;
    while(i >= 0 ) cout<<ans[i--];
    cout<<endl;
}
bool custom(string &a, string &b)
{
    if (a[1] == b[1])
        return a[0] < b[0];
    return a[1] < b[1];
}

int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}