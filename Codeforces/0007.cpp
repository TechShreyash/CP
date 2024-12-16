// https://codeforces.com/problemset/problem/1989/A

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i != n; i++)
    {
        // For each coin
        int cx, cy;
        cin >> cx >> cy;

        if (cy < -1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
}