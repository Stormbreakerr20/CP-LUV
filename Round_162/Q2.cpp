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
    ll n = nxt();
    ll k = nxt();

    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    vector<ll> a1(n);
    vector<ll> a2(n);
    f(i,n) cin>>a1[i];
    f(i,n) a2[i] = abs(nxt());

    f(i,n) pq.push({a2[i],a1[i]});

    ll i = 0;
    ll gun = k;
    while(!pq.empty())
    {
        if(pq.top().first == i + 1 && pq.top().second > gun)
        {
            cout<<"NO"<<endl;
            return;
        } 
        else{
            if(pq.top().first == i + 1)
            {
                gun -= pq.top().second;
                pq.pop();
            }     
            else if(pq.top().first > i + 1)
            {
                gun += k;
                i++;
            }
        }
    }

    cout<<"YES"<<endl;
    
}
int main()
{
    ll t = nxt();
    while(t--)
    {
        func();
    }
}