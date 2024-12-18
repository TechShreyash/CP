// https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
}