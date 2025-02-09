// https://www.codechef.com/START171C/problems/SWISHGAME

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    int m, k;
    cin >> m >> k;
    string s;
    cin >> s;

    int swish = 0;
    for (int i = 0; i < m; i++)
    {
        if (s[i] == 'S')
        {
            swish++;
        }
    }

    if (swish >= k)
    {
        cout << m << br;
        return;
    }
    else
    {
        cout << m + (k - swish) - 1 << br;
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
        solve();
    }
    return 0;
}