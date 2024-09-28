// https://codeforces.com/contest/1935/problem/B
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr)
{
    int n=arr.size();
    vector<int>prefix_arr(n);
    vector<int>suffix_arr(n);
    set<int>prefix_set,suffix_set;
    int a=0;
    for(int j=0;j<n;j++)
    {  
        prefix_set.insert(arr[j]);
        while(prefix_set.count(a))
        {
            a++;
        }
        prefix_arr[j]=a;
    }
    int b=0;
    for(int j=n-1;j>=0;j--)
    {
        suffix_set.insert(arr[j]);
        while(suffix_set.count(b))
        {
            b++;
        }
        suffix_arr[j]=b;
    }

    // Now checking prefix_arr=suffix_arr somewhere
    for(int w=0;w+1<n;w++)
    {
        if(prefix_arr[w]==suffix_arr[w+1])
        {
            cout<<2<<endl;
            cout<<1<<" "<<w+1<<endl;
            cout<<w+2<<" "<<n<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>arr;
        for(int j=0;j<n;j++)
        {
            int ele;
            cin>>ele;
            arr.push_back(ele);
        }
        solve(arr);
    }
}