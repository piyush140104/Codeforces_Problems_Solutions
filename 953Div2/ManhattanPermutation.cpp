#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        int n;
        ll k;
        cin>>n>>k;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++)
        {
            arr[i]=i;
        }
        int last=n;
        for(int i=1;i<=n && last>i;)
        {
            if(k>=2*(last-i))
            {
                k=k-2*(last-i);
                swap(arr[i],arr[last]);
                last--;
                i++;
            }
            else
            {
                last--;
            }
        }
        if(k==0)
        {
            cout<<"Yes"<<endl;
            for(int j=1;j<=n;j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}