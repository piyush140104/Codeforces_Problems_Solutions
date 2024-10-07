// https://codeforces.com/contest/2005/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int w=0;w<t;w++)
    {
        int n;
        cin>>n;
        string s;
        int per_count=n/5;
        if(n%5==0)
        {
            for(int j=1;j<=per_count;j++)
            {
                s+='a';
            }
             for(int j=1;j<=per_count;j++)
            {
                s+='e';
            }
             for(int j=1;j<=per_count;j++)
            {
                s+='i';
            }
             for(int j=1;j<=per_count;j++)
            {
                s+='o';
            }
            for(int j=1;j<=per_count;j++)
            {
                s+='u';
            }
        }
        else
        {
            int per_count_a=per_count;
            int per_count_b=per_count;
            int per_count_c=per_count;
            int per_count_d=per_count;
            int per_count_e=per_count;
            if(n%5==1)
            {   
                per_count_a++;
            }
            else if(n%5==2)
            {
                per_count_a++;
                per_count_b++;
            }
            else if(n%5==3)
            {
                per_count_a++;
                per_count_b++;
                per_count_c++;
            }
            else if(n%5==4)
            {
                per_count_a++;
                per_count_b++;
                per_count_c++;
                per_count_d++;
            }

            for(int j=1;j<=per_count_a;j++)
            {
                s+='a';
            }
             for(int j=1;j<=per_count_b;j++)
            {
                s+='e';
            }
            for(int j=1;j<=per_count_c;j++)
            {
                s+='i';
            }
            for(int j=1;j<=per_count_d;j++)
            {
                s+='o';
            }
            for(int j=1;j<=per_count;j++)
            {
                s+='u';
            }
        }
        cout<<s<<endl;
    }
}