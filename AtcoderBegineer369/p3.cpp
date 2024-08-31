#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin >> n;
    vector<ll> arr;
    if (n < 2) {
        cout << n << endl;
        return 0;
    }
    for (ll i = 0; i < n; i++) {
        ll ele;
        cin >> ele;
        arr.push_back(ele);
    }
    ll left = 0;
    ll right = left + 1;
    ll count = arr.size();
    ll prev_diff = arr[right] - arr[left];
    ll storing_left = -1;
    ll storing_right = -1;

    while (right < static_cast<ll>(arr.size())) {
        ll diff = arr[right] - arr[right - 1];
        if (diff == prev_diff) {
            count++;
            right++;
        } else {
            left++;
            right = left + 1;
            prev_diff = arr[right] - arr[left];
        }
        if (right == static_cast<ll>(arr.size()) - 1) {
            storing_left = left;
            storing_right = right;
        }
    }

    if (storing_right - storing_left >= 2) {
        ll temp = ((storing_right - storing_left - 1) * (storing_right - storing_left)) / 2;
        count += temp;
    }

    cout << count << endl;
}
