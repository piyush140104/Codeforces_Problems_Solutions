#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int len;
        cin>>len;
        string s;
        cin>>s;
        int temp1=0;
        int temp2=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='B')
            {
                temp1=j;
                break;
            }
        }
        for(int j=s.size()-1;j>=0;j--)
        {
            if(s[j]=='B')
            {
                temp2=j;
                break;
            }
        }
        if(temp1==temp2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<temp2-temp1+1<<endl;
        }
    }
}