// https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr = {4, 7, 44, 47, 74, 77, 477, 747, 774, 744, 474, 447, 444, 777};

    for (int i = 0; i < arr.size(); i++)
    {
        if (n % arr[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}