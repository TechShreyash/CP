// https://www.codechef.com/START172C/problems/SMLPAL

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < x / 2; i++)
    {
        cout << 1;
    }
    for (int i = 0; i < y; i++)
    {
        cout << 2;
    }
    for (int i = 0; i < x / 2; i++)
    {
        cout << 1;
    }
    cout << br;
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