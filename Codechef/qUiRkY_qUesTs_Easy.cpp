// https://www.codechef.com/problems/MINBOTTLES

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
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (n == 1)
        {
            cout << arr[0] << endl;
            continue;
        }

        sort(arr, arr + n);
        ll sumL = 0;

        ll temp = sum;

        for (ll i = 0; i < n; i++)
        {
            sumL += arr[i];
            ll sum2 = ((i + 1) * (i + 1)) + sum - sumL;
            // cout << sum2 << endl;

            temp = max(temp, sum2);
        }

        sum = max(sum, temp);

        cout << sum << endl;
    }
}