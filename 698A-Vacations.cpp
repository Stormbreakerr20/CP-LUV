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
    ll n = nxt();

    ll ans = 0;

    vector<ll> v(n);
    for(int i=0;i<n;i++) v[i] = nxt();

    ll start = 0;
    while(v[start] == 3) start++;
    if(start>=n){
        cout<<0;
        return 0;
    }
    char prev = v[start] == 0?'r':v[start] ==1?'c':'g';
    if(prev == 'r') ans++;

    for(int i = start+1;i<n;i++){

        if(v[i] == 0 || (v[i] == 2 && prev =='g') || (v[i] == 1 && prev =='c')) ans++,prev = 'r';
        else if(v[i] == 1) prev = 'c';
        else if(v[i] == 2) prev = 'g';
        else if(v[i] == 3){
            if(prev == 'r') while(i+1<v.size() && v[i+1] == 3) i++;
            else if(prev == 'c') prev = 'g';
            else prev = 'c';
        }
        
    }

    cout<<ans;
}