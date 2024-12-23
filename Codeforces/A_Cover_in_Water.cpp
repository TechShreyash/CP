// https://codeforces.com/problemset/problem/1900/A

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

        string s;
        cin >> s;

        int water = 0;

        int b1 = -1; // position of block (#)
        int b2 = -1;

        if (s.find("...") != string::npos)
        {
            // infinite water can be made
            water = 2;
            cout << water << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            char c = s[i];

            if ((i == n - 1) && (s[n - 1] == '.'))
            {
                i = n;
                c = '#';
            }

            if (c == '#')
            {
                b2 = i;

                int d = b2 - b1 - 1;
                if (d == 0)
                {
                    // no space between #
                }
                else if (d == 1)
                {
                    // single space between #
                    s[b1 + 1] = '_';
                    water++;
                }
                else
                {
                    if (d % 2 == 0)
                    {
                        // even space between #
                        if (d == 2)
                        {
                            water += 2;
                        }
                        else
                        {
                            water += d / 2;
                        }
                    }
                    else
                    {
                        // odd space between #
                        water += (d / 2) + 1;
                    }

                    for (int w = b1 + 1; w < b2; w++)
                    {
                        s[w] = '_';
                    }
                }

                b1 = b2;
            }
        }

        cout << water << endl;
    }
}