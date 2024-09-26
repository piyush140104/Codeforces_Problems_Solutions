#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        int l=1;
        int r=n;
        vector<int>result_arr(n+1,0);
        for(int w=0;w<k;w++)
        {
            for(int m=w;m<n;m+=k)
            {
                if(w%2==0)
                {
                    result_arr[m]=l;
                    l=l+1;
                }
                else
                {
                    result_arr[m]=r;
                    r=r-1;
                }
            }
        }
        for(int k=0;k<n;k++)
        {
            cout<<result_arr[k]<<" ";
        }
        cout<<endl;
    }
}