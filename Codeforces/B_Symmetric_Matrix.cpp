// https://codeforces.com/problemset/problem/1426/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;

        int n, m;
        cin >> n >> m;

        bool sym = false;

        for (int i = 0; i < n; i++)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;

            if (b == c)
            {
                sym = true;
            }
        }

        if (m % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        if (sym)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}