#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll a,b,m;
        cin>>a>>b>>m;
        ll time_1=m/a+1;
        ll time_2=m/b+1;
        cout<<time_1+time_2<<endl; 
    }
}