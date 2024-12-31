// https://codeforces.com/problemset/problem/758/A

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < max)
        {
            total += max - arr[i];
        }
    }

    cout << total;
}