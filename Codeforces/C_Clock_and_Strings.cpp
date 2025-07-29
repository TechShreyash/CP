// https://codeforces.com/problemset/problem/1971/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        t--;

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if ((abs(a - b) == 1) || (abs(a - b) == 11) || (abs(c - d) == 1) || (abs(c - d) == 11))
        {
            cout << "NO" << endl;
            continue;
        }

        if (a > b)
        {
            int x = b;
            b = a;
            a = x;
        }
        if (c > d)
        {
            int x = d;
            d = c;
            c = x;
        }

        int x = 0;

        if ((c > a) && (c < b))
        {
            x++;
        }
        if ((d > a) && (d < b))
        {
            x++;
        }

        if (x == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}