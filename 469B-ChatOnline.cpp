#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, q, t, r;
    cin >> p >> q >> t >> r;

    vector<bool> p1(5000);
    vector<pair<int, int>> p2;

    while (p--)
    {
        int k, l;
        cin >> k >> l;
        for (int i = k; i <= l; i++)
            p1[i] = 1;
    }
    int ans = 0;
    vector<int> store;
    while (q--)
    {
        int k, l;
        cin >> k >> l;
        for (int i = k; i <= l; i++)
        {
            for (int j = t; j <= r; j++)
            {
                if ((p1[i + j] || p1[i + j]) && find(store.begin(), store.end(), j) == store.end())
                    store.push_back(j);
            }
        }
    }

    cout << store.size();
}