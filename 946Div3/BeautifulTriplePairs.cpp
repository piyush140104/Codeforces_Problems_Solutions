// https://codeforces.com/contest/1974/problem/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        map<tuple<ll,ll,ll>,ll>mpp;
        int len;
        cin>>len;
        vector<int>arr;
        for(int i=0;i<len;i++)
        {
            int ele;
            cin>>ele;
            arr.push_back(ele);
        }
        // visualise problem by drawing Venn diagram 
        ll result=0;
        for(int j=0;j<len-2;j++)
        {
            ll a=arr[j];
            ll b=arr[j+1];
            ll c=arr[j+2];
            // Basically we subtract the intersection of three sets from the intersection of any two sets
            // a,b and b,c and c,a subtracting the intersection a,b,c as we want two same elements one different
            result+=mpp[{a,b,-1}]+mpp[{-1,b,c}]+mpp[{a,-1,c}]-3*(mpp[{a,b,c}]);
            mpp[{a,b,-1}]++;
            mpp[{-1,b,c}]++;
            mpp[{a,-1,c}]++;
            mpp[{a,b,c}]++;
        }
        cout<<result<<endl;
    }
}