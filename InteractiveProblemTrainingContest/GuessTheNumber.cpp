#include <bits/stdc++.h>
using namespace std;
int main()
{
    int low = 1;
    int high = 1000000;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        cout << mid << endl;
        // use flush so that result not stored in buffer
        cout << flush;
        string s;
        cin >> s;
        if (s == "<")
        {
            high = mid - 1;
        }
        else if (s == ">=")
        {
            ans = max(ans, mid);
            low = mid + 1;
        }
    }
    cout << " ! " << ans << endl;
    cout << flush;
}