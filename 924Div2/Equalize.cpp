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
        cin>>n;
        set<int>st;
        for(int j=0;j<n;j++)
        {
            int ele;
            cin>>ele;
            st.insert(ele);
        }
        vector<int>arr;
        for(auto &it:st)
        {
            arr.push_back(it);
        }
        ll ans=0;
        for(ll l=0;l<arr.size();l++)
        {
            ll var=arr[l];
            auto z=lower_bound(arr.begin(),arr.end(),var+n);
            ll d=z-arr.begin()-l;
            ans=max(ans,d);
        }
        cout<<ans<<endl;
    }
}