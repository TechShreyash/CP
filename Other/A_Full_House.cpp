// https://atcoder.jp/contests/abc263/tasks/abc263_a

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    map<int, int> c;

    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        c[n]++;
    }

    if (c.size() != 2)
    {
        cout << "No";
        return 0;
    }

    for (const auto &[key, value] : c)
    {
        if ((value != 2) && (value != 3))
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
        break;
    }
}