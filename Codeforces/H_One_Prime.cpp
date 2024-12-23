// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool prime = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}