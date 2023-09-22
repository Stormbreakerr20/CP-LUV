#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
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
        ll ans = 1;

        ll mini = LLONG_MAX;

        ll n = nxt();

        vector<int> v(n);
        for (int i = 0; i < n; i++){
            v[i] = nxt();
            if(v[i]<mini) mini = v[i];
        }

        bool done = 0;
        for (int i = 0; i < n; i++){
            if(v[i] == mini && !done){
                v[i] = v[i] +1 ,done = 1;
            }
            ans*=v[i];
        }

        cout<<ans<<endl;
        
    }
}