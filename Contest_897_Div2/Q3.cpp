#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <climits>
#include <queue>

#define all(x) (x).begin(), (x).end()
using namespace std;
#define ll long long

inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}

bool f()
{
    ll n = nxt();
    priority_queue<ll, vector<ll>, greater<ll>> pq;

    unordered_map<ll, bool> v;
    
    for (ll i = 0; i < n; i++)
        v[nxt()] = 1;

    for (ll i = 0; i <= 1e9; i++)
    {
        if (v.find(i) == v.end())
            pq.push(i);
        if (pq.size() > 2 * n)
            break;
    }

    cout << pq.top() << endl;
    v[pq.top()] = 1;
    pq.pop();
    cout.flush();

    int count = 2 * n;
    while (count--)
    {
        ll inp = nxt();
        if (inp == -1)
            break;
        if (inp == -2)
            return 0;
        pq.push(inp);
        v.erase(inp);

        cout << pq.top() << endl;
        v[pq.top()] = 1;
        pq.pop();
        cout.flush();
    }
    return 1;
}

int main()
{
    ll t = nxt();
    while (t--)
    {
        if (!f())
            return 0;
    }
}