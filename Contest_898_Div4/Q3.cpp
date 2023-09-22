#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
int f(int i,int j)
{
    if( i == 0 || i == 9 || j == 0 || j==9) return 1;
    else if( i == 1 || i == 8 || j == 1 || j==8) return 2;
    else if( i == 2 || i == 7 || j == 2 || j==7) return 3;
    else if( i == 3 || i == 6 || j == 3 || j==6) return 4;
    else return 5;
}
int main()
{
    int t = nxt();
    while (t--)
    {
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                char x;
                cin >> x;
                if (x == 'X')
                    ans += f(i,j);
            }
        }
        cout<<ans<<endl;
    }

    
}