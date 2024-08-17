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
        for(int j=0;j<n;j++)
        {
            int ele;
            cin>>ele;
            arr.push_back(ele);
            mpp[ele]++;            
        }
        bool found=false;
        for (auto it = mpp.rbegin(); it != mpp.rend(); ++it) {
            if((mpp[it->first])%2!=0)
            {
                found=true;
                break;
            }
        }
        if(found)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}