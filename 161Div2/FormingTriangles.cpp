#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        vector<ll>arr;
        map<ll,ll>mpp;
        for(ll j=0;j<n;j++)
        {
            ll ele;
            cin>>ele;
            mpp[ele]++;
        }
        if(n<3)
        {
            cout<<0<<endl;
            continue;
        }
        ll count=0;
        ll count2=0;
        for(auto it:mpp)
        {
            if(it.second>=3)
            {
                count+=((it.second)*(it.second-1)*(it.second-2))/6;
            }
            if(it.second>=2)
            {
                ll z1=((it.second)*(it.second-1))/2;
                ll z2=count2;
                count+=(z1*z2);
            }
            count2+=it.second;
        }
        cout<<count<<endl;
    }
}