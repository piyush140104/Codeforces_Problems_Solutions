// https://codeforces.com/problemset/problem/1932/B
#include<bits/stdc++.h>
using namespace std;
int next_factor(int current,int yearr)
{
    int year=current/yearr;
    return yearr*(year+1);
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>arr;
        for(int j=0;j<n;j++)
        {
            int ele;
            cin>>ele;
            arr.push_back(ele);
        }
        int current_wait=arr[0];
        for(int w=1;w<n;w++)
        {
            if(current_wait==arr[w])
            {
                current_wait=arr[w]*2;
            }
            else if(current_wait<arr[w])
            {
                current_wait=arr[w];
            }
            else
            {
                current_wait=next_factor(current_wait,arr[w]);
            }
        }
        cout<<current_wait<<endl;
    }
}