#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int n = nums.size();
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int m = (l + r) / 2;

        if (nums[m] == target)
        {
            return true;
        }
        else if ((nums[l] == nums[m]) && (nums[r] == nums[m]))
        {
            l++;
            r--;
        }
        else if (nums[l] <= nums[m])
        {
            // left sorted
            if ((target <= nums[m]) && (nums[l] <= target))
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        else if (nums[r] >= nums[m])
        {
            // right sorted
            if ((target <= nums[r]) && (target >= nums[m]))
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
    }

    return false;
}