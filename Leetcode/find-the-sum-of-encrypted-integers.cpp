// https://leetcode.com/problems/find-the-sum-of-encrypted-integers/description/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> nums = {10, 21, 31};

    int sum = 0;
    int size = nums.size();
    int maxDigit = 0;
    int digitCount = 0;
    int encrypted = 0;

    for (int i = 0; i < size; i++)
    {
        int n = nums[i];
        maxDigit = 0;
        digitCount = 0;
        encrypted = 0;

        while (n > 0)
        {
            maxDigit = max(maxDigit, n % 10);
            digitCount++;
            n /= 10;
        }

        for (int i = 0; i < digitCount; i++)
        {

            encrypted = (encrypted * 10) + maxDigit;
        }
        sum += encrypted;
    }

    cout << sum;
}