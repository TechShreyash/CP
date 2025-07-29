// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k, s;
    cin >> k >> s;

    if (s <= k)
    {
        int total = (s + 2) * (s + 1) / 2;
        cout << total;
    }
    else
    {
        int total = 0;

        for (int x = 0; x <= k; x++)
        {
            for (int y = 0; y <= k; y++)
            {
                int z = s - x - y;
                if ((z <= k) && (z >= 0))
                {
                    total++;
                }
            }
        }
        cout << total;
    }
}