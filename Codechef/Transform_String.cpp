// https://www.codechef.com/START172C/problems/P4_172

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    string a;
    string b;
    cin >> a >> b;

    ll cost = 0;
    ll pos1 = 0;
    ll n1 = a.size();
    ll n2 = b.size();
    ll pos2 = n2 - 1;
    ll c = 1;
    bool possible = true;
    ll got = 0;

    vector<bool> hash(n1, 0);

    for (ll i = n1 - 1; i >= 0; i--)
    {
        if (a[i] == b[pos2])
        {
            pos2--;
            hash[i] = true;
            got++;

            if (pos2 == -1)
            {
                break;
            }
        }
    }

    for (ll i = 0; i < n1; i++)
    {
        if (!hash[i])
        {
            cost += c;
        }
        else
        {
            c++;
        }
    }

    if (got == n2)
    {
        cout << cost << br;
    }
    else
    {
        cout << -1 << br;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}