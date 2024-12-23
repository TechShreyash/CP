// https://leetcode.com/problems/complement-of-base-10-integer

class Solution {
public:
    int bitwiseComplement(int n) {
        int result = 0;
        int i = 0;

        if (n==0){
        result=1;
    }
    

        while (n != 0) {
            result = result + (pow(2, i) * ((n & 1) ^ 1));
            n = n >> 1;
            i++;
        }
        return result;
    }
};