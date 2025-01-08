// https://www.hackerrank.com/challenges/number-groups/problem

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k;
    cin >> k;

    int skip = k * (k - 1) / 2;

    int sum = 0;
    for (int n = skip + 1, i = 0; i < 3; i++, n++)
    {
        sum += ((2 * n) - 1);
    }
    cout << sum;
}