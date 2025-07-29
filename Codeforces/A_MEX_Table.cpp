// https://codeforces.com/contest/2057/problem/A

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

        ll n, m;
        cin >> n >> m;

        ll sum = max(n, m) + 1;
        cout << sum << endl;
    }
}