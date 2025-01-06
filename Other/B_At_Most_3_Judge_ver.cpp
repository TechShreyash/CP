// https://atcoder.jp/contests/abc251/tasks/abc251_b

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, w;
    cin >> n >> w;

    int arr[n];
    set<int> uniqueSums;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= w)
        {
            uniqueSums.insert(arr[i]);
        }
    }

    if (n >= 2)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (arr[i] + arr[j] <= w)
                {
                    uniqueSums.insert(arr[i] + arr[j]);
                }
            }
        }
    }

    if (n >= 3)
    {
        // Subarrays of 3 elements
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    if (arr[i] + arr[j] + arr[k] <= w)
                    {
                        uniqueSums.insert(arr[i] + arr[j] + arr[k]);
                    }
                }
            }
        }
    }

    cout << uniqueSums.size() << endl;
}