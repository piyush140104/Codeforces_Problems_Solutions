#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll a,b;
        cin>>a>>b;
        ll LCM=abs(a*b)/GCD(a,b);
        if(LCM==a || LCM==b)
        {
            if(a>b)
            {
                ll remain=a/b;
                cout<<LCM*remain<<endl;
            }
            else
            {
                ll remain=b/a;
                cout<<LCM*remain<<endl;
            }
        }
        else
        {
            cout<<LCM<<endl;
        }
    }
}