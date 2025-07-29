// https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    while (true)
    {
        n++;
        int x = n;

        bool skip = false;
        int a[4];

        for (int i = 0; i < 4; i++)
        {
            int dig = x % 10;
            x /= 10;
            a[i] = dig;

            for (int j = 0; j < i; j++)
            {
                if (dig == a[j])
                {
                    skip = true;
                    break;
                }
            }
            if (skip)
            {
                break;
            }
        }

        if (!skip)
        {
            cout << n << endl;
            break;
        }
    }
}