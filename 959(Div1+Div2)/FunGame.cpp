// https://codeforces.com/problemset/problem/1994/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int count=0;
        bool found=true;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==t[j] && s[j]=='1')
            {
                count++;
                continue;
            }
            else if(s[j]==t[j] && s[j]=='0')
            {
                continue;
            }
            else if(s[j]!=t[j] && s[j]=='1')
            {
                count++;
                continue;
            }
            else if(s[j]!=t[j] && s[j]=='0')
            {
                if(count>0)
                {
                    continue;
                }
                else
                {
                    found=false;
                    break;
                }
            }
        }
        if(found)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}