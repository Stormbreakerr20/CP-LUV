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
    ll n = nxt();
    vector<string> v(n);
    vector<pair<ll,string>> temp;
    f(i,n){
        string k;
        cin>>k;
        temp.push_back({k.length(),k});
    }

    // Sort via size
    sort(all(temp));

    // put in v
    f(i,n) v[i] = temp[i].second;

    // Now we will store [len][tot] for string in map so we have their count that how many string have size len and sum tot
    vector<map<int,int>> mp(6); // as len can be 1 - 5

    ll ans = n; // (i,i) is good
    for(auto i:v){
        ll tot = 0;
        // Sum dig
        for(auto j:i) tot += j - '0';
        // Now for string with size n we can add if n even: n+2,n+4... n+x st x<=n
        // for odd n+1,n+3... st x<=n 
        // we can add that x len string from front and end both
        // so 123 + 1 ==> 3 + 1 ==> sum(left) == sum(right) then good
        // sum(left) = total(size(3)) - 3 hence we want string of len x with sum tot - 2*a from back  or tot - 2*b from front

        for(ll len = i.length() + 2 - i.length()%2; len<=10; len+=2 ){
            
            // x <== n ==> x+n = len ==> len - n <= n  ==> len <= 2n
            if(len > 2*i.length()) break;

            ll a = 0,b=0;
            for(ll j = 0; j < i.length() - len/2;j++){
                b += i[j] - '0';
                a += i[i.length() - j - 1] - '0';
            }

            ans += mp[len - i.length()][tot - 2*a];
            ans += mp[len - i.length()][tot - 2*b];
        }
        mp[i.length()][tot]++;
    }

    cout<<ans<<endl;
}