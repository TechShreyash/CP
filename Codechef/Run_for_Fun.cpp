// https://www.codechef.com/START176C/problems/RURT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x >= y)
    {
        cout << 0;
    }
    else
    {
        if (y % x == 0)
        {
            cout << (y / x) - 1;
        }
        else
        {

            cout << y / x;
        }
    }
}
