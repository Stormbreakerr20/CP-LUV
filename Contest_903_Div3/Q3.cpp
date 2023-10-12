#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
int main()
{
    ll t = nxt();
    while (t--)
    {
        ll n = nxt();
        vector<vector<char>> v(n, vector<char>(n));
        vector<vector<bool>> visited(n, vector<bool>(n, 0));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                v[i][j] = c;
            }
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (v[i][j] > v[j][(n - 1) - i])
                {
                    if (visited[j][n - 1 - i])
                    {
                        char temp = v[j][n - 1 - i];
                        v[j][n - 1 - i] = v[i][j];
                        ll k = j;
                        ll m = n - i - 1;
                        ll c = 1;
                        while (visited[m][n - 1 - k])
                        {
                            v[m][n - 1 - k] = v[k][m];
                            c++;
                            ll temp_k = k;
                            k = m;
                            m = n - 1 - temp_k;
                        }
                        ans += (v[i][j] - temp) * c;
                    }
                    else
                    {
                        ans += v[i][j] - v[j][(n - 1) - i];
                        v[j][n - 1 - i] = v[i][j];
                    }
                }
                else if (v[i][j] < v[j][(n - 1) - i])
                {
                    if (visited[i][j])
                    {
                        char temp = v[i][j];
                        v[i][j] = v[j][n - 1 - i];
                        ll k = n-1-j;
                        ll m = i;
                        ll c = 1;
                        while (visited[k][m])
                        {
                            v[k][m] = v[m][n-1-k];
                            c++;
                            ll temp_k = k;
                            k = n - 1 - m;
                            m = temp_k;
                        }
                        ans += (v[j][(n - 1) - i] - temp) * c;
                    }
                    else
                    {
                        ans += v[j][(n - 1) - i] - v[i][j];
                        v[i][j] = v[j][n - 1 - i];
                    }
                }
                visited[i][j] = 1;
                visited[j][n-i-1] = 1;

            }
        }
        cout << ans << endl;
    }
}
