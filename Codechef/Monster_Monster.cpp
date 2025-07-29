// https://www.codechef.com/problems/KO_MON

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

        ll n, x;
        cin >> n >> x;

        ll arr[n];

        ll hmin = 0;
        ll hmax = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];

            if ((hmin == 0) || (arr[i] < hmin))
            {
                hmin = arr[i];
            }
            if ((hmax == 0) || (arr[i] > hmax))
            {
                hmax = arr[i];
            }
        }

        sort(arr, arr + n, greater<int>());

        ll minA = hmax;

        for (ll i = 1; i < n; i++)
        {
            minA = max(minA, ((i * x) + arr[i]));
        }

        cout << minA << endl;
    }
}