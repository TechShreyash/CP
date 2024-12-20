// https://codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        t--;

        int n, k;
        cin >> n >> k;

        int a[n];

        bool sorted = true;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (i > 0)
            {
                if (a[i] < a[i - 1])
                {
                    sorted = false;
                }
            }
        }

        if ((k == 1) && (!sorted))
        {

            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}