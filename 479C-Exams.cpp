#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <utility>
#include <climits>
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
    vector<pair<ll,ll>> v;

    for(int i=0;i<n;i++) v.push_back({nxt(),nxt()});
    sort(all(v));

    ll current_date = -1;
    for(auto i: v){
        if(current_date<=i.second) current_date = i.second;
        else current_date = i.first;
    }

    cout<<current_date;

}