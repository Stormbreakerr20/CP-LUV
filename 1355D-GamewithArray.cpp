#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
inline ll nxt() {
ll x;
cin >> x;
return x;
}
void print(vector<ll> v, ll n)
{
f(i, n) cout << v[i] + 1; 
cout << endl;
}
int main(){
    ll n = nxt();
    ll s = nxt();
    ll upper = s - (n-1);
    ll lower = n-1;

    if(lower + 1 < upper){
        cout<<"YES"<<endl;
        f(i,n-1) cout<<1<<" ";
        cout<<(s - (n-1))<<endl;
        cout<<(lower + 1)<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}