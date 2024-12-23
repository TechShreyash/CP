// https://leetcode.com/problems/number-complement

class Solution {
public:
    int findComplement(int num) {
         int result = 0;
        int i = 0;

        if (num==0){
        result=1;
    }
    

        while (num != 0) {
            result = result + (pow(2, i) * ((num & 1) ^ 1));
            num = num >> 1;
            i++;
        }
        return result;
    }
};