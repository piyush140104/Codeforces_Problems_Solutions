#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    set<int>ss;
    if((a+b)%2==0)
    {
        ss.insert((a+b)/2);
    }
    ss.insert(2*a-b);
    ss.insert(2*b-a);
    cout<<ss.size()<<endl;
}