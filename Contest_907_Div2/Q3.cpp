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
    while(t--)
    {
        ll n = nxt();
        vector<ll> a(n);
        f(i,n) cin>>a[i];
        sort(all(a));

        // We just need to gather half combos x so wecan kill rest sum(A)/2 via combo

        ll sum_a_half = accumulate(all(a),0ll)/2;
        ll cnt = sum_a_half;
        ll s = 0;
        while(s<n && cnt>0) cnt -= a[s++];

        cout<<(sum_a_half + (n-s))<<endl;
    }
}