// https://codeforces.com/problemset/problem/1475/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    ll n;
    cin >> n;

    while (n > 1)
    {
        if (n % 2 != 0)
        {
            cout << "YES" << br;
            return;
        }

        n /= 2;
    }
    cout << "NO" << br;
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