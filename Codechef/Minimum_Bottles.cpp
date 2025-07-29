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

        ll n, x;
        cin >> n >> x;

        ll arr[n];

        ll sum = 0;
        ll bottles = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (sum >= x)
            {
                sum -= x;
                bottles++;
            }
        }

        if (sum > 0)
        {
            bottles++;
        }

        cout << bottles << endl;
    }
}