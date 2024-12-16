// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (((a + b - c) == d) || ((a + b * c) == d) || ((a - b + c) == d) || ((a - b * c) == d) || ((a * b + c) == d) || ((a * b - c) == d))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}