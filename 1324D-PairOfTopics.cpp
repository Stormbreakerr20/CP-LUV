#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
void Merge(vector<ll> &diff, ll s,ll e,ll &ans){

    ll mid = s + (e-s)/2;
    vector<ll> a,b;
    for(ll i = s; i<=mid;i++) a.push_back(diff[i]);
    for(ll i = mid+1; i<=e;i++) b.push_back(diff[i]);
    
    ll ap = 0,bp = 0;

    ll i=a.size()-1,j = 0;
    while(j<b.size()){
        while(i>=0 && a[i] > -b[j]) i--;
        ans+= a.size() - 1 - i;
        j++;
    }

    while(ap < a.size() && bp < b.size()){
        if(a[ap]<b[bp]) diff[s++] = a[ap++];
        else diff[s++] = b[bp++];
    }

    while(ap< a.size()) diff[s++] = a[ap++];
    while(bp< b.size()) diff[s++] = b[bp++];



}
void MergeSort_Pairs_Comparison(vector<ll> &diff, ll s,ll e,ll &ans){
    if(s>=e) return;
    ll mid = s + (e-s)/2;
    MergeSort_Pairs_Comparison(diff,s,mid,ans);
    MergeSort_Pairs_Comparison(diff,mid+1,e,ans);

    Merge(diff,s,e,ans);
}

int main()
{
    ll n = nxt();

    vector<ll> a(n),b(n);

    for (ll i = 0; i < n; i++) a[i] = nxt();
    for (ll i = 0; i < n; i++) b[i] = nxt();

    vector<ll> diff(n);
    for (ll i = 0; i < n; i++) diff[i] = a[i] - b[i];

    ll ans = 0;

    MergeSort_Pairs_Comparison(diff,0,n-1,ans);

    cout<<ans;
    
}