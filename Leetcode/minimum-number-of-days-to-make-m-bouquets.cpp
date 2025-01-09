// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long

int getBouquetCount(const vector<int> &bloomDay, int k, int waitingDays)
{
    int bouquetCount = 0;
    int requiredFlowers = k;

    for (const int day : bloomDay)
    {
        if (day > waitingDays)
        {
            requiredFlowers = k;
        }
        else if (--requiredFlowers == 0)
        {
            ++bouquetCount;
            requiredFlowers = k;
        }
    }
    return bouquetCount;
}

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

    int l = *std::min_element(bloomDay.begin(), bloomDay.end());
    int r = *std::max_element(bloomDay.begin(), bloomDay.end());

    while (l < r)
    {
        const int mid = (l + r) / 2;
        if (getBouquetCount(bloomDay, k, mid) >= m)
            r = mid;
        else
            l = mid + 1;
    }

    cout << l;
    return l;
}