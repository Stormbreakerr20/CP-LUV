#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    for (long long i = 0; i < m; i++)
        cin >> b[i];

    long long pa = 0;
    long long pb = 0;

    while (pa < n && pb < m)
    {
        while (a[pa] > b[pb])
            pb++;
        if (pb >= m)
            break;
        b[pb] = 0;
        pa++;
    }
    cout << n - pa;
}
