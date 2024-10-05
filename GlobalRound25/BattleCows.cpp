#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr;
        for (int j = 0; j < n; j++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        k--;
        int temp = -1;
        for (int w = 0; w < n; w++)
        {
            if (arr[w] > arr[k])
            {
                temp = w;
                break;
            }
        }
        if (temp == -1)
        {
            cout << n - 1 << endl;
            continue;
        }
        else
        {

            if (temp > k)
            {
                int count = 0;
                for (int w = 0; w < temp; w++)
                {
                    if (w != k)
                    {
                        count++;
                    }
                }
                cout << count << endl;
            }
            else
            {
                int count1 = 0;
                int count2 = 0;
                int count3 = 0;
                for (int l = temp + 1; l < k; l++)
                {
                    if (arr[l] <= arr[k])
                    {
                        count3++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (temp != 0)
                {
                    count1 = temp - 1;
                    count2 = count3 + 1;
                }
                else
                {
                    count1 = 0;
                    count2 = count3;
                }
                cout << max(count1, count2) << endl;
            }
        }
    }
}