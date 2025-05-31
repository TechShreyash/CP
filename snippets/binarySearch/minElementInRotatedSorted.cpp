#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    int x = 1e9;

    while (l <= r)
    {
        int m = (l + r) / 2;

        x = min(x, nums[m]);

        if (nums[l] <= nums[m])
        {
            // left sorted
            if ((nums[l] <= x) && (nums[l] <= nums[r]))
            {
                r = m - 1;
            }
            else
            {

                l = m + 1;
            }
        }
        else
        {
            // right sorted

            r = m - 1;
        }
    }

    return x;
}