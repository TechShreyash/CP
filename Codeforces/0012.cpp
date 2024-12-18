// https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    bool skip = false;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (skip)
            {
                skip = false;
                continue;
            }

            if (s[j] == 'B')
            {
                if ((j != (n - 1)) && (s[j + 1] == 'G'))
                {
                    s[j] = 'G';
                    s[j + 1] = 'B';
                    skip = true;
                }
            }
        }
    }

    cout << s;
}