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
        string s;
        cin >> s;

        ll cnt = 0;
        ll i = 0;
        ll j = n - 1;

        while (i <= j && s[i] != '*')
            i++;
        while (i <= j && s[j] != '*')
            j--;
        ll left_sheep = 0;
        ll right_sheep = 0;
        if (i == j)
        {
            cout << cnt << endl;
            continue;
        }
        while (i <= j)
        {
            while (i < j && s[i] == '*')
                left_sheep++, i++;
            while (i < j && s[j] == '*')
                right_sheep++, j--;

            if (left_sheep <= right_sheep)
            {
                cnt += left_sheep;
                i++;
            }
            else
            {
                cnt += right_sheep;
                j--;
            }
        }
        cout << cnt << endl;
    }
}
