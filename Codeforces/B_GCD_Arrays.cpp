// https://codeforces.com/contest/1629/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    int l, r, k;
    cin >> l >> r >> k;

    if (l == r)
    {
        if (l == 1)
        {
            cout << "NO" << br;
        }
        else
        {
            cout << "YES" << br;
        }
        return;
    }

    if (l == 1 && k == 0)
    {
        cout << "NO" << br;
        return;
    }

    int x = r - l + 1;
    int even, odd;

    if (l % 2 == 0)
    {
        even = (x + 1) / 2;
        odd = x / 2;
    }
    else
    {
        odd = (x + 1) / 2;
        even = x / 2;
    }

    // cout << even << " " << odd << br;

    if (odd <= k)
    {
        cout << "YES" << br;
    }

    else
    {
        cout << "NO" << br;
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