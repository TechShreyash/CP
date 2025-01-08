// https://cses.fi/problemset/task/1713

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

    vector<int> divisors(1e6 + 1, 0);
    for (int i = 1; i <= 1e6; i++)
    {
        for (int j = i; j <= 1e6; j += i)
        {
            divisors[j]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << divisors[x] << endl;
    }
}