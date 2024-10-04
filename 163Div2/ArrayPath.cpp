#include<bits/stdc++.h>
using namespace std;
bool solve(int row,int column,vector<vector<char>>&brr)
{
    if(row==1 && column==brr[0].size()-1)
    {
        return true;
    }
    column=column+1;
    int row_d[4]={0,-1,1};
    int col_d[4]={1,0,0};

    for(int j=0;j<3;j++)
    {
        int new_row=row+row_d[j];
        int new_column=column+col_d[j];
        if(new_row>=0 && new_column>=0 && new_row<2 && new_column<brr[0].size()-1)
        {
            if(brr[new_row][new_column]=='>')
            {
                if(solve(new_row,new_column,brr)==true)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                continue;
            }
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<vector<char>>brr;
        for(int r=0;r<2;r++)
        {
            for(int j=0;j<n;j++)
            {
                char ele;
                cin>>ele;
                brr[r].push_back(ele);
            }
        }
        solve(0,0,brr);
    }

}