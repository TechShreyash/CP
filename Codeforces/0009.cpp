// https://codeforces.com/problemset/problem/1800/A

#include <iostream>
#include <string>
#include <cctype>

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

        bool meow = true;
        int check = 1;

        for (int i = 0; i < n; i++)
        {
            char c = tolower(s[i]);
            s[i] = c;

            if (check == 1)
            {
                if (c == 'm')
                {
                    continue;
                }
                else if (c == 'e')
                {
                    check = 2;
                    continue;
                }
                else
                {
                    meow = false;
                    break;
                }
            }
            if (check == 2)
            {
                if (c == 'e')
                {
                    continue;
                }
                else if (c == 'o')
                {
                    check = 3;
                    continue;
                }
                else
                {
                    meow = false;
                    break;
                }
            }
            if (check == 3)
            {
                if (c == 'o')
                {
                    continue;
                }
                else if (c == 'w')
                {
                    check = 4;
                    continue;
                }
                else
                {
                    meow = false;
                    break;
                }
            }
            if (check == 4)
            {
                if (c != 'w')
                {
                    meow = false;
                    break;
                }
            }
        }

        if ((s[0] != 'm') || (s[n - 1] != 'w'))
        {
            meow = false;
        }

        if (meow)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}