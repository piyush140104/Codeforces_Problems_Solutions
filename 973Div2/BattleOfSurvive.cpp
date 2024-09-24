#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        vector<ll> arr;
        for (ll j = 0; j < n; j++)
        {
            ll ele;
            cin >> ele;
            arr.push_back(ele);
        }
        ll diff = 0;
        if (n == 2)
        {
            cout << arr[n - 1] - arr[n - 2] << endl;
        }
        else
        {
            if (n == 3)
            {
                cout << arr[n - 1] - (arr[n - 2] - arr[n - 3]) << endl;
            }
            else
            {
                ll diff = arr[n - 2];
                for (ll w = 0; w < n - 2; w++)
                {
                    diff = diff - arr[w];
                }
                cout << arr[n - 1] - diff << endl;
            }
        }
    }
}