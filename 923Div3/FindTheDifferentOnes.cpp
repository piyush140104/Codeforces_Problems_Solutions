#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int len;
        cin >> len;
        vector<int> arr;
        vector<int> brr;
        for (int j = 0; j < len; j++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        for (int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j] != arr[j + 1])
            {
                brr.push_back(j);
            }
        }
        int q;
        cin >> q;
        for (int j = 0; j < q; j++)
        {
            int start, end;
            cin >> start >> end;
            start--;
            end--;
            int lb_ind = lower_bound(brr.begin(), brr.end(), start) - brr.begin();
            if (lb_ind < brr.size() && brr[lb_ind] < end)
            {
                cout<<brr[lb_ind]+1<<" "<<brr[lb_ind]+2<<endl;
            }
            else
            {
                cout<<-1<<" "<<-1<<endl;
            }
        }
    }
}
                                             