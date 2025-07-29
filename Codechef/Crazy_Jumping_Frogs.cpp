// https://www.codechef.com/problems/FROGS_JUMP

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;

        ll arr[n];

        ll odd = 0;
        ll even = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else if (n == 2)
        {
            if (abs(arr[0] - arr[1]) % 2 != 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
            continue;
        }

        cout << max(odd, even) << endl;
    }
}