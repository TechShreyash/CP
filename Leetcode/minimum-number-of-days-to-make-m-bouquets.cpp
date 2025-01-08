// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;

    int n = bloomDay.size();

    if (1LL * m * k > n)
    {
        return -1;
    }

    if (1LL * m * k == n)
    {
        int day = 0;

        for (int i = 0; i < n; i++)
        {
            if (bloomDay[i] > day)
            {
                day = bloomDay[i];
            }
        }
        return day;
    }
    else
    {
        map<vector<int>, int> unique;

        for (int i = k - 1; i < n; i++)
        {
        }
    }
}