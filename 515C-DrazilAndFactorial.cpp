#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
inline string nxt()
{
    string x;
    cin >> x;
    return x;
}
int main()
{
    int t;
    cin>>t;
    string s = nxt();
    string ans = "";
    for(auto i:s){
        if(i == '0' || i == '1') continue;
        if(i == '4') ans += "223";
        else if(i == '6') ans += "35";
        else if(i == '8') ans += "2227";
        else if(i == '9') ans += "3327";  // imp 9! = 72*7! = 3!*3!*2*7!
        else ans+=i;
    }

    sort(all(ans));
    reverse(all(ans));
    cout<<ans;
}