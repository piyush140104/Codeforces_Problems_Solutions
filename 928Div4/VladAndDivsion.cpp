#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>arr;
        map<int,int>mpp;
        int result=n;
        for(int j=0;j<n;j++)
        {
            int ele;
            cin>>ele;
            arr.push_back(ele);
            mpp[ele]++;
        }
        for(int w=0;w<n;w++)
        {
            if(mpp[arr[w]] && mpp[2147483647^arr[w]])
            {
                mpp[arr[w]]--;
                mpp[2147483647-arr[w]]--;
                result--;
            }
        }
        cout<<result<<endl;
    }
}