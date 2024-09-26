#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        
        set<int> s1, s2;
        for (int j = 0; j < n; j++)
        {
            int ele;
            cin >> ele;
            if (ele >= 1 && ele <= k)
            {
                s1.insert(ele);
            }
        }
        for (int j = 0; j < m; j++)
        {
            int ele;
            cin >> ele;
            if (ele >= 1 && ele <= k)
            {
                s2.insert(ele);
            }
        }

        map<int, int> mpp1, mpp2;
        for (int ele : s1)
        {
            mpp1[ele]++;
        }
        for (int ele : s2)
        {
            mpp2[ele]++;
        }

        int count1 = 0;
        int count2 = 0;
        int count = 0;

        for (int l = 1; l <= k; l++)
        {
            if (mpp2[l] != 0 && mpp1[l] == 0)
            {
                count2++;
            }
            else if (mpp1[l] != 0 && mpp2[l] == 0)
            {
                count1++;
            }
            else if(mpp1[l]!=0 && mpp2[l]!=0)
            {
                count++;
            }
        }
        int remain1 = k / 2 - count1;
        int remain2 = k / 2 - count2;
        if(remain1==0 && remain2==0 && count==0)
        {
            cout<<"YES"<<endl;
        }
        else if (remain1 != 0 && remain2 != 0 && remain1 > 0 && remain2 > 0)
        {
            count = count - remain1;
            if (count > 0)
            {
                count = count - remain2;
                if (count == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (remain1 != 0 && remain1 > 0 && remain2 == 0)
        {
            count = count - remain1;
            if (count == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (remain2 != 0 && remain2 > 0 && remain1 == 0)
        {
            count = count - remain2;
            if (count == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
