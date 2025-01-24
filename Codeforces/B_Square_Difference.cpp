// https://codeforces.com/problemset/problem/1033/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    ll a, b;
    cin >> a >> b;

    if ((a - b) == 1)
    {
        ll n = a + b;

        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << "NO" << br;
                return;
            }
        }
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