// https://codeforces.com/problemset/problem/1509/B

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
        string s;
        cin >> s;
        int t = 0, m = 0;

        bool yes = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'M')
            {
                m++;
                if (t < m)
                {
                    yes = false;
                    break;
                }
            }
            else
            {
                t++;
            }
        }

        t = 0;
        m = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'M')
            {
                m++;
                if (t < m)
                {
                    yes = false;
                    break;
                }
            }
            else
            {
                t++;
            }
        }

        if (yes)
        {
            if (m * 2 != t)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}