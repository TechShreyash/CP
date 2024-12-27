// https://codeforces.com/problemset/problem/1999/B

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

bool isWin(int a, int b, int c, int d)
{
    if ((a > b) && (c > d))
    {
        return true;
    }
    else if (((a > b) && (c == d)) || ((c > d) && (a == b)))
    {
        return true;
    }
    return false;
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
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int win = 0;

        if (isWin(a1, b1, a2, b2))
        {
            win += 2;
        }
        if (isWin(a1, b2, a2, b1))
        {
            win += 2;
        }

        cout << win << endl;
    }
}