#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    vector<int> brr;
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int ele;
        cin >> ele;
        char x;
        cin >> x;
        if (x == 'L')
        {
            arr.push_back(ele);
        }
        if (x == 'R')
        {
            brr.push_back(ele);
        }
    }
    int score=0;
    if (arr.size() != 0)
    {
        int val1 = arr[0];
        for (int m = 1; m < arr.size(); m++)
        {
            score += abs(arr[m] - arr[m - 1]);
        }
    }
    if (brr.size() != 0)
    {
        int val2 = brr[0];
        for (int m = 1; m < brr.size(); m++)
        {
            score += abs(brr[m] - brr[m - 1]);
        }
    }

    cout << score << endl;
}