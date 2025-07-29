// https://leetcode.com/problems/jump-game/


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) {
            return true;
        }
        if (nums[0] == 0) {
            return false;
        }

        for (int i = 1; i < n - 1; i++) {
            if (nums[i] == 0) {
                int prev = 0;
                bool success = false;

                for (int j = i - 1; j >= 0; j--) {
                    if (nums[j] < prev) {
                        break;
                    }

                    int distance = i - j;
                    if (nums[j] > distance) {
                        success = true;
                        break;
                    } else {
                        prev = nums[j];
                    }
                }

                if (!success) {
                    return false;
                }
            }
        }

        return true;
    }
};