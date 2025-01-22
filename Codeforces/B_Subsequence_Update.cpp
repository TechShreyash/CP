// https://codeforces.com/contest/2063/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {

        ll n, l, r;
        cin >> n >> l >> r;

        ll arr[n];
        ll sum = 0;

        vector<ll> left;
        vector<ll> mid;
        vector<ll> right;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (((i + 1) >= l) && ((i + 1) <= r))
            {
                sum += arr[i];
                mid.push_back(arr[i]);
            }
            else if ((i + 1) < l)
            {
                left.push_back(arr[i]);
            }

            else if ((i + 1) > r)
            {
                right.push_back(arr[i]);
            }
        }

        sort(left.begin(), left.end(), greater<ll>());
        sort(mid.begin(), mid.end());
        sort(right.begin(), right.end(), greater<ll>());

        ll rSum = sum;

        vector<ll> rMid = mid;

        while ((right.size() > 0) && (rMid.size() > 0))
        {
            ll rMin = right.back();
            ll mMax = rMid.back();

            if (rMin < mMax)
            {
                rSum -= (mMax - rMin);

                // cout << rMin << " > " << mMax << endl;

                right.pop_back();
                rMid.pop_back();
            }
            else
            {
                break;
            }
        }

        ll lSum = sum;
        vector<ll> lMid = mid;

        while ((left.size() > 0) && (lMid.size() > 0))
        {
            ll lMin = left.back();
            ll mMax = lMid.back();

            if (lMin < mMax)
            {
                lSum -= (mMax - lMin);

                // cout << lMin << " > " << mMax << endl;

                left.pop_back();
                lMid.pop_back();
            }
            else
            {
                break;
            }
        }

        // cout << sum << endl;
        // cout << lSum << endl;
        // cout << rSum << endl;

        sum = min(sum, rSum);
        sum = min(sum, lSum);

        cout << sum << endl;
    }
}