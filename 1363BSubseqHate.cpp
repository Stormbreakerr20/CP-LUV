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
bool f(string &s)
{
    if(s.size()<3) return false;

    string a = "101";
    string b = "010";

    for (auto i : s)
    {
        if (a[a.size() - 1] == i)
            a.pop_back();
        if (b[b.size() - 1] == i)
            b.pop_back();
        if(a.size() == 0 || b.size() == 0) return true;
    }

    return a.size() == 0 || b.size() == 0;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        string s;
        cin >> s;

        // The only good string is one with either 0000111...11 or 11111...1110000....00
        // So we make zeroes = total zeroes, ones = total ones then done_zeroes, done_ones : ones and zeroes that are flipped
        // We take two possibilites either make 0000111... or 111000.. 
        // min of the sum done_zeroes + ones tell on left done_zeroes are flipped and on right ones one will be flipped
        // min of the sum done_ones + zeroes tell on left done_ones are flipped and on right zeroes zero will be flipped
        // we take ans as min of two

        ll zeroes = 0,ones = 0;
        for(auto i:s){
            zeroes += (i == '0');
            ones += (i == '1');
        }
        ll done_zeroes = 0,done_ones = 0;

        ll ans = min(ones,zeroes);

        for(auto i:s){

            done_zeroes += (i == '0') , zeroes -= (i == '0');
            done_ones += (i == '1'), ones -= (i == '1');

            ans = min(done_zeroes + ones , ans);
            ans = min(done_ones + zeroes , ans);

        }
        cout<<ans<<endl;
    }
}