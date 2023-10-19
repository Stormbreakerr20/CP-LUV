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
    vector<vector<bool>> v(5,vector<bool> (5,0));
    ll a,b;
    for(int i = 0;i < 5;i++){
        for(int j = 0;j<5;j++){
            v[i][j] = nxt();
            if(v[i][j] == 1) a = i,b = j;
        }
    }
    cout<<(abs(a-2) + abs(b-2))<<endl;
}