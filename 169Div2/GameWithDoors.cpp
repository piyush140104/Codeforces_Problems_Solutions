#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l, r;
        cin >> l >> r;
        int L, R;
        cin >> L >> R;
        int left_side = max(l, L);
        int right_side = min(r, R);
        int count = right_side - left_side;
        // Case of NO intersection
        if(count+1<=0)
        {
            cout<<1<<endl;
            continue;
        }
        // Case of intersection
        if (L == l)
        {
            if (R != r)
            {
                cout << count + 1 << endl;
                continue;
            }
            else
            {
                cout << count<< endl;
                continue;
            }
        }
        else if (L != l)
        {
            if (R == r)
            {
                cout << count + 1 << endl;
                continue;
            }
            else
            {
                cout << count + 2 << endl;
            }
        }
    }
}