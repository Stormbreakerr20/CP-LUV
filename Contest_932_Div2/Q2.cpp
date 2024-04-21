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
    vector<ll> v(n);
    // partition into 2 always
    map<int,int> m;
    f(i,n){
        cin>>v[i];
        m[v[i]]++;
    }
    ll val = -1;
    f(i,n+1) if(m[i] == 0) {val = i;break;}

    if(val == 0){
        cout<<2<<nline;
        cout<<"1 1"<<nline;
        cout<<2<<" "<<n<<nline;
        return;
    }
    // cout<<val<<nline;
    ll x = 0;
    ll cnt = 0;
    ll first = 0;
    vector<ll> temp(val);

    while(x < n)
    {
        if(v[x] < val && temp[v[x]] == 0){
            temp[v[x]] = 1;
            cnt++;
        }
        if(cnt == val)
        {
            first = x;
            break;
        }
        x++;
    }
    bool pos = 0;
    x = first + 1;
    cnt = 0;
    vector<ll> temp2(val);
    while(x < n)
    {
        if(v[x] < val && temp2[v[x]] == 0){
            temp2[v[x]] = 1;
            cnt++;
        }
        if(cnt == val)
        {
            pos = 1;
            break;
        }
        x++;
    }

    if(pos){
        cout<<2<<nline;
        cout<<1<<" "<<first + 1<<nline<<first + 2<<" "<<n<<nline;
        return;
    }
    cout<<-1<<nline;

}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}