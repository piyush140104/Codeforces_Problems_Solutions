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
        for(int j=0;j<n;j++)
        {
            int ele;
            cin>>ele;
            arr.push_back(ele);
        }
        bool found=true;
        for(int j=1;j<n;j++)
        {
            if(arr[j]-arr[j-1]==1)
            {
                found=false;
                break;
            }
        }
        if(!found)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}