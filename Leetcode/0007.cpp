// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        int y = 0;

        while (x != 0) {
            int dig = x % 10;

            if ((y > INT_MAX/10) || ((y == INT_MAX/10) && (dig > 7))) {
                return 0;
            }
            if ((y < INT_MIN/10) || ((y == INT_MIN/10) && (dig < -8))) {
                return 0;
            }

            y = (y * 10) + (x % 10);
            x = x / 10;
        }

        return y;
    }
};