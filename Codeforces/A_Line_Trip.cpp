// https://codeforces.com/problemset/problem/1901/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        t--;

        int n, x;
        cin >> n >> x;

        int a[n];
        cin >> a[0];
        int max = a[0];

        for (int i = 1; i < n; i++)
        {
            cin >> a[i];

            int d = abs(a[i] - a[i - 1]);
            if (d > max)
            {
                max = d;
            }
        }

        int d = 2 * (x - a[n - 1]);
        if (d > max)
        {
            max = d;
        }
        cout << max << endl;
    }
}