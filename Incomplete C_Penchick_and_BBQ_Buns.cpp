// https://codeforces.com/problemset/problem/2031/C

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void printForOdd(int n)
{
    int num = 2;
    int prev = 2;

    for (int i = 0; i < n; i++)
    {
        if (i % 9 == 0)
        {
            cout << 1 << " ";
            cout << prev << " ";


        }
        else
        {
            cout << num << " ";
            if (i % 2 == 0)
            {
                num++;
            }
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            int num = 1;
            for (int i = 1; i <= n; i++)
            {
                cout << num << " ";
                if (i % 2 == 0)
                {
                    num++;
                }
            }
            cout << endl;
        }
        else
        {
            if (n == 27)
            {
                printForOdd(n);
                return 0;
            }
            else if (n > 27)
            {
                int x = 27;
                while (true)
                {
                    if ((x + 1) % 2 != 0)
                    {
                        x++;
                    }
                    else if ((x + 8) % 2 != 0)
                    {
                        x += 8;
                    }

                    if (x == n)
                    {
                        printForOdd(n);
                        return 0;
                    }

                    if (x > n)
                    {
                        break;
                    }
                }
            }

            cout << -1 << endl;
        }
    }
}