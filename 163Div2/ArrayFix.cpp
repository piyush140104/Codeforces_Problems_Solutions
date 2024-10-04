// https://codeforces.com/contest/1948/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int n;
        cin >> n;
        vector<int> arr;
        bool found=true;
        for (int j = 0; j < n; j++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        int current=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]<current)
            {
                found=false;
                break;
            }
            else
            {
                int first_digit=arr[i]/10;
                int last_digit=arr[i]%10;
                if(first_digit>=current)
                {
                    if(last_digit>=first_digit)
                    {
                        current=last_digit;
                    }
                    else
                    {
                        current=arr[i];
                    }
                }
                else
                {
                    current=arr[i];
                }
            }
        }
        if(found==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}