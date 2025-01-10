// https://codeforces.com/problemset/problem/1954/B

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
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

        int n;
        cin >> n;

        vector<int> arr;

        int minAdjacent = n;
        int currentAdjacent = 1;
        int beautifulElement;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);

            if (i == 0)
            {
                beautifulElement = x;
            }
            else
            {
                if (x == beautifulElement)
                {
                    currentAdjacent++;
                }
                else
                {
                    minAdjacent = min(currentAdjacent, minAdjacent);
                    currentAdjacent = 0;
                }
            }

            if (i == n - 1)
            {
                minAdjacent = min(currentAdjacent, minAdjacent);
            }
        }

        if (minAdjacent == n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << minAdjacent << endl;
        }
    }
}