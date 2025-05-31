// https://www.codechef.com/START173C/problems/COOLSUB

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    map<int, int> counter;

    bool done = false;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        counter[arr[i]]++;

        if ((counter[arr[i]] == 2) && (!done))
        {
            cout << 1 << br;
            cout << arr[i] << br;
            done = true;
        }
    }

    if (done)
    {
        return;
    }
    cout << -1 << br;
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