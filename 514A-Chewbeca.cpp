#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <climits>
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
    string inp = nxt();
    for(int i = 0;i<inp.length();i++){
        int dig = inp[i] - '0';
        if(i == 0 && dig == 9) continue;
        int onrev = 9 - dig;
        if(dig>onrev) inp[i] = (onrev + '0');
    }

    cout<<inp;
}