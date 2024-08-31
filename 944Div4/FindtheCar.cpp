#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll just_lower_index(ll element,vector<ll>&arr)
{
    ll low = 0, high = arr.size() - 1;
    ll result = 0; 
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= element) {
            result = mid;  
            low = mid + 1;  
        } else {
            high = mid - 1;  
        }
    }
    return result; 
}
void solve(ll element,vector<ll>&arr,vector<ll>&brr)
{
    ll lower_bound_ind=just_lower_index(element,arr);
    ll result=0;
    result+=brr[lower_bound_ind];
    long long interval_distance=arr[lower_bound_ind+1]-arr[lower_bound_ind];
    long long time=brr[lower_bound_ind+1]-brr[lower_bound_ind];
    long long remaining_distance=element-arr[lower_bound_ind];
    long long var=remaining_distance*time;
    long long var2=var/interval_distance;
    result+=var2;
    cout<<result<<endl;
}
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> arr;
        vector<ll> brr;
        arr.push_back(0);
        brr.push_back(0);
        for (ll j = 0; j < k; j++)
        {
            ll ele;
            cin >> ele;
            arr.push_back(ele);
        }
        for (ll w = 0; w < k; w++)
        {
            ll ele;
            cin >> ele;
            brr.push_back(ele);
        }
        for (ll m = 0; m < q; m++)
        {
            ll ele;
            cin >> ele;
            if(ele==arr[1])
            {
                cout<<brr[1]<<endl;
            }
            else if(ele==arr[k])
            {
                cout<<brr[k]<<endl;
            }
            else
            {
                solve(ele,arr,brr);
            }
        }
    }
}