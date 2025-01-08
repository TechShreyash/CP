// https://www.codechef.com/problems/EQUXOR

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

        int arr[n];
        map<int, pair<int, int>> counter;
        map<int, bool> added;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (!added[arr[i]])
            {
                counter[arr[i]].first = i;
                added[arr[i]] = true;
            }
            counter[arr[i]].second = i;
        }

        added.clear();

        int cost = 0;

        int done = -1;

        for (int j = 0; j < n; j++)
        {
            pair<int, int> p1 = counter[arr[j]];

            if (p1.first == p1.second)
            {
                continue;
            }

            int start = p1.first;
            int end = p1.second;

            if (end <= done)
            {
                continue;
            }

            done = end;

            if (!added[arr[j]])
            {
                added[arr[j]] = true;
                cost++;
                // cout << "num" << arr[j] << endl;
            }

            for (int i = start + 1; i < end; i++)
            {
                pair<int, int> p2 = counter[arr[i]];

                if (p2.first != p2.second)
                {
                    if (p2.second > end)
                    {
                        end = p2.second;
                        done = end;
                    }
                }
                if (!added[arr[i]])
                {
                    added[arr[i]] = true;
                    cost++;
                    // cout << "num" << arr[i] << endl;
                }
            }
            // cout << endl;
        }

        cout << cost << endl;
    }
}