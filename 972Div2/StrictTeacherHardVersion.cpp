// https://codeforces.com/contest/2005/problem/B2
#include<bits/stdc++.h>
using namespace std;
int upper_bound_ind_finder(vector<int>&brr,int target)
{
    auto ind=upper_bound(brr.begin(),brr.end(),target);
    int res=ind-brr.begin();
    return res;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>brr;
        for(int j=0;j<m;j++)
        {
            int ele;
            cin>>ele;
            brr.push_back(ele);
        }
        sort(brr.begin(),brr.end());
        vector<int>arr;
        for(int w=0;w<q;w++)
        {
            int ele;
            cin>>ele;
            arr.push_back(ele);
        }
        for(int j=0;j<q;j++)
        {
            if(arr[j]<brr[0])
            {
                cout<<brr[0]-1<<endl;
            }
            else if(arr[j]>brr[m-1])
            {
                cout<<n-brr[m-1]<<endl;
            }
            else
            {
                int index=upper_bound_ind_finder(brr,arr[j]);
                cout<<(brr[index]-brr[index-1])/2<<endl;
            }
        }
    }
}