#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll x,y,k;
        cin>>x>>y>>k;
        bool found=false;
        while(k>0)
        {
            if(x==1)
            {
                cout<<k%(y-1)+1<<endl;
                found=true;
                break;
            }
            else if((x+1)%y==0)
            {
                x=x+1;
                while(x%y==0)
                {
                    x=x/y;
                }
                k--;
            }
            else
            {
                ll rem=y-x%y;
                if(rem>=k)
                {
                    x=x+k;
                    while(x%y==0)
                    {
                        x=x/y;
                    }
                    cout<<x<<endl;
                    found=true;
                    break;
                }
                else
                {
                    x=x+rem;
                    k=k-rem;
                    while(x%y==0)
                    {
                        x=x/y;
                    }
                }
            }
        }
        if(found)
        {
            continue;
        }
        else
        {
            cout<<x<<endl;
        }
    }
}