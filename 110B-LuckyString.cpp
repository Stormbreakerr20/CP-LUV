#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <climits>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    
    string s = "abcd";

    if (n < 5)
    {
        cout << s.substr(0, n);
        return 0;
    }

    int abcd_occ = n / 4;
    int left = n % 4;

    string ans = "";

    for (int i = 0; i < abcd_occ; i++)
        ans += s;
    for (int i = 0; i < left; i++)
        ans += string(1, 'a' + i);

    cout << ans;
}