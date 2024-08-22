#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int net = a + b / 3;
        int remain = b % 3;
        if (b % 3 == 0)
        {
            if (c % 3 == 0)
            {
                net += c / 3;
            }
            else
            {
                net += c / 3;
                net += 1;
            }
        }
        else if (b % 3 == 1)
        {
            if (c >= 2)
            {
                net += 1;
                c = c - 2;
                if (c % 3 == 0)
                {
                    net += c / 3;
                }
                else
                {
                    net += c / 3;
                    net += 1;
                }
            }
            else
            {
                cout << -1 << endl;
                continue;
            }
        }
        else if (b % 3 == 2)
        {
            if (c >= 1)
            {
                net += 1;
                c = c - 1;
                if (c % 3 == 0)
                {
                    net += c / 3;
                }
                else
                {
                    net += c / 3;
                    net += 1;
                }
            }
            else
            {
                cout << -1 << endl;
                continue;
            }
        }
        else
        {
            cout << -1 << endl;
            continue;
        }
        cout << net << endl;
    }
}