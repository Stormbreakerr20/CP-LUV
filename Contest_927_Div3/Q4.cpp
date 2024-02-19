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
bool custom(string &a,string &b)
{
    if(a[1] == b[1]) return a[0] < b[0];
    return a[1] < b[1];
}
void func()
{
    ll n = nxt();

    char trump;
    cin >> trump;

    vector<string> normal, t;

    f(i, 2 * n)
    {
        string inp;
        cin >> inp;

        if (inp[1] == trump)
            t.push_back(inp);
        else
            normal.push_back(inp);
    }

    sort(all(normal),custom);
    sort(all(t));

    ll s1 = 0;
    ll s2 = 0;

    vector<pair<string,string>> ans;

    while (s1 < normal.size())
    {
        // cout<<normal[s1+1]<<endl;
        if (s1 + 1 < normal.size() && normal[s1][1] == normal[s1 + 1][1])
        {
            ans.push_back({normal[s1],normal[s1+1]});
            s1 += 2;
        }
        else if (s2 < t.size())
        {
            ans.push_back({normal[s1],t[s2]});
            s1++;
            s2++;
        }
        else{
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }
    }

    while(s2<t.size())
    {
        ans.push_back({t[s2],t[s2+1]});
        s2+=2;
    }

    for(auto i: ans)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

}
int main()
{
    ll t = nxt();
    while (t--)
    {
        func();
    }
}