#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>precompute_arr(200001,0);
// precompute to avoid TLE
void precompute()
{
    for(int i=1;i<=200001;i++)
    {
        ll count=0;
        ll temp=i;
        while(temp!=0)
        {
            count++;
            temp=temp/3;
        }
        precompute_arr[i]=count;
    }
    // Prefix Sum
    for(int j=2;j<=200001;j++)
    {
        precompute_arr[j]=precompute_arr[j]+precompute_arr[j-1];
    }
}
int main()
{
    precompute();
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int l,r;
        cin>>l>>r;
        int result=0;
        int num=l;
        while(num!=0)
        {
            result++;
            num=num/3;
        }
        result=result*2;
        result+=precompute_arr[r]-precompute_arr[l];
        cout<<result<<endl;
    }
}