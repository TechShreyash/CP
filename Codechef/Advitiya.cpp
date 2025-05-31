// https://www.codechef.com/START171C/problems/ADVITIYA

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    string s;
    cin >> s;

    int steps = 0;
    string a = "ADVITIYA";

    for (int i = 0; i < 8; i++)
    {
        char x = s[i];
        char y = a[i];
        if (y > x)
        {
            steps += y - x;
        }
        else if (x > y)
        {
            steps += 'Z' - x + y - 'A' + 1;
        }
    }

    cout << steps << br;
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
        solve();
    }
    return 0;
}