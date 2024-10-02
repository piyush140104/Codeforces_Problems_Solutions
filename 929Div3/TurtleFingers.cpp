#include <bits/stdc++.h>
using namespace std;

int finding_max_powers(int num1, int num2)
{
    int count = 0;
    while (num1 % num2 == 0)
    {
        count++;
        num1 = num1 / num2;
    }
    return count;
}

int int_pow(int base, int exp)
{
    int result = 1;
    while (exp--)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;
        set<int>storing_k;
        int max_pow_a = finding_max_powers(l, a);
        for(int j=0;j<=max_pow_a;j++)
        {
            int num=l/int_pow(a,j);
            int max_pow_b=finding_max_powers(num,b);
            for(int m=0;m<=max_pow_b;m++)
            {
                int val=num/int_pow(b,m);
                storing_k.insert(val);
            }
        }
        cout<<storing_k.size()<<endl;
    }
}