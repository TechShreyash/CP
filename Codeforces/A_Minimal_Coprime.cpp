// https://codeforces.com/contest/2063/problem/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        int l, r;
        cin >> l >> r;

        if (r == 1)
        {
            cout << 1 << endl;
            continue;
        }

        int total = 0;

        if (l == 1)
        {
            total++;
            l++;
        }

        for (int i = l; i < r; i++)
        {
            total++;
        }

        cout << total << endl;
    }
}