// https://atcoder.jp/contests/arc157/tasks/arc157_a

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    if ((a != 0) && (d != 0) && (b == 0) && (c == 0))
    {
        cout << "No";
        return 0;
    }

    if (abs(b - c) > 1)
    {
        cout << "No";
        return 0;
    }

    cout << "Yes";
    return 0;
}