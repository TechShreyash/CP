// https://atcoder.jp/contests/abc305/tasks/abc305_a

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int x = n % 5;

    if ((x == 0) || (x == 1) || (x == 2))
    {
        cout << (n / 5) * 5;
    }
    else
    {
        cout << ((n / 5) + 1) * 5;
    }
}