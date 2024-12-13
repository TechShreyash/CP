// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b)
    {
        if (a < c)
        {
            cout << a << " " << c;
        }
        else
        {
            cout << c << " " << a;
        }
    }
    else if (b == c)
    {
        if (b < a)
        {
            cout << b << " " << a;
        }
        else
        {
            cout << a << " " << b;
        }
    }
    else if (a == c)
    {
        if (a < b)
        {
            cout << a << " " << b;
        }
        else
        {
            cout << b << " " << a;
        }
    }
    else
    {
        if ((a < b) && (a < c))
            cout << a << " ";
        if ((b < a) && (b < c))
            cout << b << " ";
        if ((c < b) && (c < a))
            cout << c << " ";

        if ((a > b) && (a > c))
            cout << a;
        if ((b > a) && (b > c))
            cout << b;
        if ((c > b) && (c > a))
            cout << c;
    }
}