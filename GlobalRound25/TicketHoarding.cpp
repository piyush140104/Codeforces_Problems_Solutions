#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> arr;
        for (ll j = 0; j < n; j++)
        {
            ll ele;
            cin >> ele;
            arr.push_back(ele);
        }
        if (n == 1)
        {
            cout << arr[0] * k << endl;
            continue;
        }
        sort(arr.begin(), arr.end());
        ll per_day = k / m;
        ll cost = 0;
        if (per_day == 0)
        {
            cost = arr[0] * k;
        }
        else
        {
            if (k % m == 0)
            {
                ll perr = k / m;
                ll temp = m;
                ll count = 1;
                for (ll w = perr - 1; w >= 0; w--)
                {
                    cost += arr[w] * m;
                    if (w > 0)
                    {
                        arr[w - 1] += temp;
                        count++;
                        temp = m * count;
                    }
                }
            }
            else
            {
                ll remaind = k % m;
                ll perrr = k / m;
                ll temp2 = m;
                ll count2 = 1;
                for (ll w = 0; w < perrr; w++)
                {
                    cost += arr[w] * m;
                    arr[w + 1] += temp2;
                    count2++;
                    temp2 = m * count2;
                }
                cost += (arr[perrr]) * remaind;
            }
        }
        cout << cost << endl;
    }
}