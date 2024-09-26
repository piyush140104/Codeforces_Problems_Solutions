// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int len;
//         cin >> len;
//         vector<int> arr;
//         int maxi = INT_MIN;
//         for (int j = 0; j < len; j++)
//         {
//             int ele;
//             cin >> ele;
//             arr.push_back(ele);
//             maxi = max(maxi, ele);
//         }
//         vector<char> brr(len, '0');
//         for (int j = 0; j <= maxi; j++)
//         {
//             char temp = 'a';
//             for (int m = 0; m < len; m++)
//             {
//                 if (arr[m] == j)
//                 {
//                     brr[m] = temp;
//                     temp++;
//                 }
//             }
//         }
//         for(int k=0;k<brr.size();k++)
//         {
//             cout<<brr[k];
//         }
//         cout<<endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int len;
        cin >> len;
        vector<int> arr;
        map<int, int> mpp;

        for(int j = 0; j < len; j++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
            mpp[ele]++;
        }

        map<int, vector<char>> mpp2;
        
        for(auto it : mpp)
        {
            char temp = 'a';
            int val = mpp[it.first];
            for(int j = 1; j <= val; j++)
            {
                mpp2[it.first].push_back(temp);
                temp++;
            }
        }

        map<int, int> currentIndex;

        for(int u = 0; u < arr.size(); u++)
        {
            int ele = arr[u];
            
            cout << mpp2[ele][currentIndex[ele]] ;

            currentIndex[ele]++;
        }
        cout << endl;
    }
}



