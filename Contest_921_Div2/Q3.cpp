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
int main()
{
    ll t = nxt();
    while(t--)
    {
        ll n = nxt();
        ll k = nxt();
        ll m = nxt();

        string s;cin>>s;

        set<char> st;
        string ans = "";

        for(auto i: s)
        {
            st.insert(i);
            if(st.size() == k)
            {
                ans.push_back(i);
                st.clear();
            }
        }

        if(ans.size() >= n) cout<<"YES"<<endl;
        else{
            char missing;
            for(int i = 0;i<k;i++)
            {
                if(st.count((i + 'a')) == 0)
                {
                    missing = i + 'a';
                }
            }

            while(ans.size() < n) ans.push_back(missing);

            cout<<"NO"<<endl;
            cout<<ans<<endl;
        }

    }
}