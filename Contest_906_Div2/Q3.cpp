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
    f(i, n) cout << v[i] + 1 << " ";
    cout << endl;
}
int main()
{
    ll t = nxt();
    while(t--){
        ll n = nxt();
        string s;
        cin>>s;

        ll cnt = 0;
        ll i = 0;
        ll j = n-1;
        vector<ll> p;

        if(n&1) cout<<-1<<endl;
        else{
            while(i<j){
                if(s[i] != s[j]) i++,j--;
                else if(s[i] == '0' && cnt<=300){
                    s = s.substr(0,j+1) + "01" + s.substr(j+1,s.length() - (j+1));
                    i++;
                    j++;
                    cnt++;
                    p.push_back(j);
                }
                else if(s[i] == '1' && cnt<=300){
                    s = s.substr(0,i) + "01" + s.substr(i,s.length() - i);
                    i++;
                    j++;
                    cnt++;
                    p.push_back(i-1);
                }
                else break;
            }
            if(cnt>300){
                cout<<-1<<endl;
            }
            else{
                cout<<cnt<<endl;
                if(cnt == 0) cout<<endl;
                else{
                    f(i,cnt) cout<<p[i]<<" ";
                    cout<<endl;
                }
            }
        }
        
    }
}