// https://codeforces.com/contest/2051/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        int b[n];

        int q = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];

            if (i > 0)
            {
                if (a[i - 1] > b[i])
                {
                    q += a[i - 1] - b[i];
                }
            }
        }

        q += a[n - 1];

        cout << q << endl;
    }
}