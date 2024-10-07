// https://codeforces.com/contest/2005/problem/B1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> brr;
        for (int j = 0; j < 2; j++)
        {
            int ele;
            cin >> ele;
            brr.push_back(ele);
        }
        int mini = min(brr[0], brr[1]);
        int maxi = max(brr[0], brr[1]);
        int pos;
        cin >> pos;
        if (pos < min(brr[0], brr[1]))
        {
            cout << mini - 1 << endl;
        }
        else if (pos > max(brr[0], brr[1]))
        {
            cout << n - maxi << endl;
        }
        else
        {
            cout << (maxi-mini)/2 << endl;
        }
    }
}