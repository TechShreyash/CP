// https://atcoder.jp/contests/abc241/tasks/abc241_b

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m, n;
    cin >> m >> n;

    map<int, int> counter;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        counter[x]++;
    }

    bool fail = false;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (counter[x] > 0)
        {
            counter[x]--;
        }
        else
        {
            fail = true;
            break;
        }
    }

    if (!fail)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}