// https://codeforces.com/problemset/problem/1406/A

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

        map<int, int> counter;
        int max = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            counter[x]++;
            if (x > max)
            {
                max = x;
            }
        }

        int mex = 0;
        char c = 'b';

        for (int i = 0; i <= max + 1; i++)
        {
            if (counter[i] >= 2)
            {
                continue;
            }
            else if (counter[i] == 1)
            {
                if (c == 'b')
                {
                    mex += i;
                    c = 'a';
                }
            }
            else
            {
                if (c == 'a')
                {
                    mex += i;
                }
                else
                {
                    mex += 2 * i;
                }
                break;
            }
        }

        cout << mex << endl;
    }
}