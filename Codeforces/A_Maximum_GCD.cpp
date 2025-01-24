// https://codeforces.com/problemset/problem/1370/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    ll n;
    cin >> n;

    ll maxGcd = 1;

    for (ll i = 2; i <= n; i++)
    {
        ll x = 0;

        for (ll j = i; j <= n; j += i)
        {
            x++;
            if (x == 2)
            {
                break;
            }
        }

        if (x == 2)
        {
            maxGcd = i;
        }
    }

    cout << maxGcd << br;
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