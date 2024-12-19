// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 0;
    }
    else if (n == 2)
    {
        cout << 1;
    }
    else
    {
        long long sum = 1;
        long long s1 = 0;
        long long s2 = 1;

        for (int i = 2; i < n; i++)
        {
            sum = s1 + s2;
            s1 = s2;
            s2 = sum;
        }

        cout << sum;
    }
}