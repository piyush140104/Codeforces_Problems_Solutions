#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        ll n,m;
        map<ll,ll>mpp;
        cin>>n>>m;
        vector<ll>arr;
        vector<ll>brr;
        for(ll j=0;j<n;j++)
        {
            ll ele;
            cin>>ele;
            arr.push_back(ele);                
        }
        for(ll w=0;w<n;w++)
        {   
            ll ele;
            cin>>ele;
            brr.push_back(ele);
        }
        for(ll k=0;k<n;k++)
        {
            mpp[arr[k]]=brr[k];
        }
        sort(arr.begin(),arr.end());
        ll ans=0;
        // Case of Taking Flower of Single Type
        for(ll y=0;y<n;y++)
        {
            ans=max(ans,min(mpp[arr[y]],m/arr[y])*arr[y]);
        }

        // case of taking two adjacent flowers
        for(ll i=0;i<n-1;i++)
        {
            ll temp=m;
            // checking consecutive difference not exceed 1
            if(arr[i+1]-arr[i]!=1)
            {
                continue;
            }
            // finding the number of flower of 1st type
            ll mini=min(mpp[arr[i]],m/arr[i]);
            // remaining cost
            temp=temp-(mini*arr[i]);
            // finding the number of flower of 2nd type that can be taken after finding the first
            ll mini2=min(temp/arr[i+1],mpp[arr[i+1]]);
            // remaining cost
            temp=temp-(mini2*arr[i+1]);
            ll remain2=mpp[arr[i+1]]-mini2;
            // replacing 1st type flower with 2nd type
            ll c=min({temp,remain2,mini});
            // max cost/petals we can take
            ans=max(ans,m-temp+c);
        }
        cout<<ans<<endl;
    }
}   