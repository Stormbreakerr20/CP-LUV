#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long net = 0;
    vector<long long> player1, player2;
    long long last_attack;

    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        if (val > 0)
            player1.push_back(val);
        else
            player2.push_back(abs(val));
        net += val;
        if (i == n - 1)
            last_attack = val;
    }

    if (net > 0)
        cout << "first";
    else if (net < 0)
        cout << "second";

    else
    {

        for (int i = 0; i < min(player1.size(), player2.size()); i++)
        {
            if (player1[i] > player2[i])
            {
                cout << "first";
                return 0;
            }
            else if (player1[i] < player2[i])
            {
                cout << "second";
                return 0;
            }
            else if (i == min(player1.size(), player2.size()) - 1)
            {
                if (player1.size() == player2.size())
                {
                    if (last_attack > 0)
                    {
                        cout << "first";
                        return 0;
                    }
                    else
                    {
                        cout << "second";
                        return 0;
                    }
                }
                else if (player1.size() > player2.size())
                {
                    cout << "first";
                    return 0;
                }
                else
                {
                    cout << "second";
                    return 0;
                }
            }
        }
    }
}