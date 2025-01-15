// https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> nums = {3, 4, 5, 6, 7, 8};

    int total = 0;
    vector<vector<int>> subsets;
    int n = nums.size();
    int totalSubsets = 1 << n; // Total subsets = 2^n

    for (int i = 0; i < totalSubsets; ++i)
    {
        vector<int> currentSubset;
        int xor1 = 0;

        for (int j = 0; j < n; ++j)
        {
            // Check if the j-th bit in i is set
            if (i & (1 << j))
            {
                xor1 = xor1 ^ nums[j];
            }
        }
        total += xor1;
    }

    cout << total;
}