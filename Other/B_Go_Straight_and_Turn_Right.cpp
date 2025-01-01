// https://atcoder.jp/contests/abc244/tasks/abc244_b

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = 0, y = 0;
    char d = 'E';

    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c == 'S')
        {
            switch (d)
            {
            case 'E':
                x++;
                break;
            case 'S':
                y--;
                break;
            case 'W':
                x--;
                break;
            case 'N':
                y++;
                break;

            default:
                break;
            }
        }
        else if (c == 'R')
        {
            switch (d)
            {
            case 'E':
                d = 'S';
                break;
            case 'S':
                d = 'W';
                break;
            case 'W':
                d = 'N';
                break;
            case 'N':
                d = 'E';
                break;

            default:
                break;
            }
        }
    }

    cout << x << " " << y;
}