// https://codeforces.com/contest/1971/problem/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int ans = 0;
        for (int j = 1; j < s.size(); j++)
        {
            if (s[j] != s[j - 1])
            {
                ans++;
            }
        }
        if (ans == 1 && s[0] == '1')
        {
            cout << 2 << endl;
            continue;
        }
        cout << max(1, ans) << endl;
    }
}