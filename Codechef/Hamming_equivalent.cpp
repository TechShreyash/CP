// https://www.codechef.com/problems/P4169

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count += (num & 1);
        num >>= 1;
    }
    return count;
}

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

        int arr[n]; // storing numbers

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool yes = true;

        for (int i = 0; i < n; i++)
        {
            int x = countSetBits(arr[i]);
            int y = countSetBits(arr[arr[i] - 1]);

            if (x != y)
            {
                yes = false;
                break;
            }
        }

        if (yes)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}