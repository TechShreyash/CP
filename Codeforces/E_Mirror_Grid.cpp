// https://codeforces.com/contest/1703/problem/E

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

        int arr[n][n];
        int corner0 = 0, corner1 = 0;

        int ops = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char ch;
                cin >> ch;
                arr[i][j] = ch - '0';
            }
        }

        for (int j = 0; j < (n + 1) / 2; j++)
        {
            for (int i = j; i < n - 1 - j; i++)
            {
                int a = arr[i][j];
                int b = arr[j][n - i - 1];
                int c = arr[n - i - 1][n - j - 1];
                int d = arr[n - j - 1][i];

                int sum = a + b + c + d;
                ops += min(sum, 4 - sum);
            }
        }

        cout << ops << endl;
    }
}