// https://codeforces.com/problemset/problem/1896/A

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
        int min = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] < arr[min])
            {
                min = i;
            }
        }

        if (min != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}