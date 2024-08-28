// https://codeforces.com/contest/1967/problem/B1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll ans=n;
    for(ll b=2;b<=m;b++)
    {
        ll temp=b-1;
        ll max_range=n/b;
        if(max_range<temp)
        {
            break;
        }
        ll ele_in_seq=max_range-temp;
        ans+=ele_in_seq/b+1;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
}