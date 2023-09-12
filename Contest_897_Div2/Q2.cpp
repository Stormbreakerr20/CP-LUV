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

    ll t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll diff = 0;
        ll same = 0;

        ll l = 0;
        ll m = n - 1;
        while (l < m)
        {
            if (s[l] == s[m])
                same++;
            else
                diff++;
            l++;
            m--;
        }

        string ans = "";
        for (ll k = 0; k < n + 1; k++)
            ans += "0";

        if (s.length() & 1)
        {
            for (ll k = diff; k <= diff + same * 2 + 1; k++)
                ans[k] = '1';
        }
        else
        {
            for (ll k = diff; k <= diff + same * 2; k += 2)
                ans[k] = '1';
        }

        cout << ans << endl;
    }
}