#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>brr(n,1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>mpp;
    bool val_2_assigned=false;
    bool val_3_assigned=false;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
        if(mpp[arr[i]]==2)
        {
            if(val_2_assigned==false)
            {
                brr[i]=2;
                val_2_assigned=true;
            }
            else if(val_3_assigned==false)
            {
                brr[i]=3;
                val_3_assigned=true;
            }
        }
    }
    if(val_3_assigned==false)
    {
        cout<<-1<<endl;
        return;
    }
    for(int x:brr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
