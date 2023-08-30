#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> store(n);
    if (n <= 2)
    {
        cout << n;
        return 0;
    }
    long long i = 0;
    while (n--)
        cin >> store[i++];

    long long l = 0;
    long long r = 2;

    long long curr_len = 0;
    long long ans = 2;

    while (r < store.size())
    {
        while (r < store.size() && store[l] + store[l + 1] == store[r])
            curr_len++, l++, r++;
        ans = max(curr_len + 2, ans);
        curr_len = 0;
        while (r < store.size() && store[l] + store[l + 1] != store[r])
            r++, l++;
    }
    cout << ans;
}