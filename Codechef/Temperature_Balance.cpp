#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        vector<ll> posIndex, negIndex;

        for (ll i = 0; i < n; ++i)
        {
            cin >> arr[i];
            if (arr[i] > 0)
            {
                posIndex.push_back(i);
            }
            else if (arr[i] < 0)
            {
                negIndex.push_back(i);
            }
        }

        ll time = 0;

        while (negIndex.size() != 0)
        {
            ll a = posIndex.back();
            ll b = negIndex.back();
            ll x = arr[a];
            ll y = abs(arr[b]);

            if (x >= y)
            {
                arr[posIndex.back()] = x - y;
                time += y * abs(a - b);
                arr[b] = 0;
                negIndex.pop_back();

                if (arr[a] == 0)
                {
                    posIndex.pop_back();
                }
            }
            else
            {
                arr[b] += x;
                time += x * abs(a - b);
                posIndex.pop_back();
            }
        }

        cout << time << endl;
    }

    return 0;
}
