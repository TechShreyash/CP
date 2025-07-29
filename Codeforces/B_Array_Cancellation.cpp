// https://codeforces.com/problemset/problem/1405/B

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
        vector<int> positive_indexes;
        ll cost = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
            {
                positive_indexes.push_back(i);
            }

            if (arr[i] < 0)
            {
                while (positive_indexes.size() > 0)
                {
                    int a = positive_indexes.back();
                    int diff = arr[a] + arr[i];

                    if (diff >= 0)
                    {
                        arr[a] += arr[i];
                        arr[i] = 0;

                        if (diff == 0)
                        {
                            positive_indexes.pop_back();
                        }
                        break;
                    }
                    else
                    {
                        arr[i] += arr[a];
                        arr[a] = 0;
                        positive_indexes.pop_back();
                    }
                }

                if (arr[i] != 0)
                {
                    cost += abs(arr[i]);
                }
            }
        }

        cout << cost << endl;
    }
}