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
    while(t--){
        int c = 0;
        string s = "abc";
        string inp = nxt();

        for(int i = 0;i<3;i++) if(inp[i] != s[i]) c++;
        if(c == 3){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}