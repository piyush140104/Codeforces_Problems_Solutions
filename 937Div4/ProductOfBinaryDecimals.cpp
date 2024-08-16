//Problem Link-https://codeforces.com/contest/1950/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool EachDigit(ll num)
{
    while (num >= 10)
    {
        ll remain = num % 10;
        if (remain != 0 && remain != 1)
        {
            return false;
        }
        else
        {
            num = num / 10;
        }
    }
    if (num != 0 && num != 1)
    {
        return false;
    }
    return true;

}
void solve(vector<ll> &arr)
{
    for (ll j = 2; j < 100007; j++)
    {
        if (EachDigit(j) == true)
        {
            arr.push_back(j);
        }
    }
}
bool ans(ll num, const vector<ll> &arr)
{
    if (num == 1)
    {
        return true;
    }
    else
    {
        for (ll j = 0; j < arr.size(); j++)
        {
            if (num % arr[j] == 0)
            {
                if(ans(num/arr[j], arr))
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    vector<ll> arr;
    solve(arr);
    for (ll i = 0; i < t; i++)
    {
        ll n;
        cin >> n;

        if (ans(n, arr) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
