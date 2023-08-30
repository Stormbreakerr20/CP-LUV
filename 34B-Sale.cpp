#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<long long> pq;

    long long n, m;
    cin >> n >> m;
    
    while (n--)
    {
        long long k;
        cin >> k;
        if (pq.size() < m)
            pq.push(k);
        else if (pq.top() > k)
            pq.pop(), pq.push(k);
    }

    int ans = 0;
    while (!pq.empty())
    {
        ans += (pq.top() < 0 ? pq.top() : 0);
        pq.pop();
    }

    cout << (ans < 0 ? abs(ans) : 0);
}