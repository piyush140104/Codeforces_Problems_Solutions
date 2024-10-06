#include <bits/stdc++.h>
using namespace std;
void result(vector<int> &prefix_arr, int start, int end)
{
    if (end > start)
    {
        cout << prefix_arr[end] - prefix_arr[start] << endl;
    }
    else
    {
        cout << prefix_arr[start] - prefix_arr[end] << endl;
    }
}
vector<int> precompute_arr(vector<int> &arr)
{
    vector<int> prefix_arr(arr.size() + 1, 0);
    for (int k = 2; k < arr.size()-2; k++)
    {
        if (abs(arr[k]-arr[k-1]) < abs(arr[k-1]-arr[k-2]))
        {
            prefix_arr[k] = prefix_arr[k - 1] + abs(arr[k] - arr[k + 1]);
        }
        else
        {
            prefix_arr[k]=prefix_arr[k-1]+1;
        }
    }
    prefix_arr[arr.size()-1]=prefix_arr[arr.size()-2]+
    return prefix_arr;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int j = 0; j < n; j++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    vector<int> brr = precompute_arr(arr);
    int m;
    cin >> m;
    for (int w = 0; w < m; w++)
    {
        int x1, x2;
        cin >> x1 >> x2;
        result(brr,x1,x2);
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}