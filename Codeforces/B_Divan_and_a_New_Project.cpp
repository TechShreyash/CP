// https://codeforces.com/problemset/problem/1614/B

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
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

        int n;
        cin >> n;

        vector<pair<ll, ll>> arr(n); // building : no of visits

        for (int i = 0; i < n; i++)
        {
            arr[i].first = i + 1;
            cin >> arr[i].second;
        }

        // Sort the vector based on the second element of the pair
        std::sort(arr.begin(), arr.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b)
                  { return a.second < b.second; });

        int step = 1;

        map<ll, ll> output;
        ll time = 0;
        ll min = -1;
        ll max = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (step == 1)
            {
                step = -1;
                output[arr[i].first] = max;
                time += max * 2 * arr[i].second;
                max++;
            }
            else
            {
                step = 1;
                output[arr[i].first] = min;
                time += abs(min) * 2 * arr[i].second;
                min--;
            }
        }

        cout << time << endl;
        cout << 0 << " ";

        for (int i = 1; i <= n; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
    }
}