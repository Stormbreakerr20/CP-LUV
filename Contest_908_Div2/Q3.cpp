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
void rotate(vector<ll>& v,int n,int k){
    vector<ll> temp(n);
    f(i,n) temp[(k+i)%n] = v[i];
    v = temp;
}
int main()
{
    ll t = nxt();
    while(t--){
        ll n = nxt();
        // Check till n rot that ans exist for rest same cycle repeat
        ll k = min(nxt(),n);
        vector<ll> v(n);f(i,n) v[i] = nxt();

        ll last = n-1;
        // if last ele > n then the shift was not possible to make
        // for array a if Ax = X then it becomes last element in shifted array as left shift takes place 
        bool ans = 1;
        f(i,k){
            if(v[last] > n) {
                ans = 0;
                break;
            }
            last += n - v[last];
            if(last >= n) last -= n;
        }
        
        if(!ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}