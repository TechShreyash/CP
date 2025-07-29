// https://codeforces.com/problemset/problem/1705/B

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
            cout << " "; // Add a space between elements except after the last one
    }
    cout << endl; // Move to the next line after printing all elements
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

        int arr[n];
        long long turns = 0;
        bool start = false;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i != n - 1)
            {
                if ((arr[i] == 0) && (start))
                {
                    turns++;
                }

                if (arr[i] != 0)
                {
                    turns += arr[i];
                    start = true;
                }
            }
        }
        cout << turns << endl;
    }
}