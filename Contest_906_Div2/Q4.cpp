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
    ll t = nxt();
    while(t--){
        // Since we need to connect all nodes we start with 1 so i = const , c already const 
        // hence if sigma(a1 + aj)> j*c*1 we can connect 1 and j 
        // if 1 can be connected to j then for sure it can be connected to j-1,j-2,... 
        // as then component of 1 = a1 + aj i.e >j*c hence (a1 + aj) + ak > k*c if (k<j); as j*c > (j-const)*c 

        ll n = nxt();
        ll c = nxt();

        bool connect = 0;
        
        vector<ll> v(n);
        f(i,n) v[i] = nxt();

        ll c_sum = v[0];
        fex(i,1,n){
            c_sum += v[i];
            if(v[i] + v[0] >= 1*(i+1)*c){
                connect = 1;
                // all j before i can now become part
                v[0] = c_sum;
            }
            else connect = 0;
        }

        if(connect) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}