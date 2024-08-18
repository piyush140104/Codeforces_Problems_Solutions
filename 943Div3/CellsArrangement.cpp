//Problem link-https://codeforces.com/contest/1968/problem/E
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
        for(int j=1;j<=n-2;j++)
        {
            cout<<1<<" "<<j;
            cout<<endl;
        }
        cout<<n<<" "<<n<<endl;
        cout<<n-1<<" "<<1;
        cout<<endl;
    }
}