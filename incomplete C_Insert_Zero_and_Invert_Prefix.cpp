// https://codeforces.com/problemset/problem/1839/C

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

        int a[n];
        int b[n] = {0};
        int ops[n] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (a[n - 1] == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for (int i = n - 1; i >= 0; i--)
        {
            if(a[i])
        }
    }
}