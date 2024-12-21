// https://codeforces.com/problemset/problem/1899/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t > 0)
    {
        t--;

        int n;
        cin >> n;

        if (((n - 1) % 3 == 0) || ((n + 1) % 3 == 0))
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
}