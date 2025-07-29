// https://codeforces.com/contest/2053/problem/A

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

        int arr[n];

        bool yes = false;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (i > 0)
            {
                if ((2 * arr[i] > arr[i - 1]) && (arr[i] < 2 * arr[i - 1]))
                {
                    yes = true;
                }
            }
        }

        if (yes)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}