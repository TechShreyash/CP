// https://codeforces.com/problemset/problem/808/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int lucky;

    if (n > 9)
    {
        string s = to_string(n);
        int x = s[0] - '0';
        x++;
        if (x < 10)
        {
            char y = x + '0';
            s[0] = y;

            for (int i = 1; i < s.length(); i++)
            {
                s[i] = '0';
            }
            lucky = stoi(s);
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                s[i] = '0';
            }
            s = "1" + s;
            lucky = stoi(s);
        }
    }
    else
    {
        lucky = n + 1;
    }

    cout << (lucky - n);
}
