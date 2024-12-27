// https://codeforces.com/contest/2043/problem/B

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
        ll n, d;
        cin >> n >> d;

        cout << "1 ";

        if ((n == 2) && ((d == 3) || (d == 6) || (d == 9)))
        {
            cout << "3 ";
        }
        else if (n > 2)
        {
            cout << "3 ";
        }

        if (d == 5)
        {
            cout << "5 ";
        }

        if ((n == 2) && (d == 7))
        {
            cout << "7 ";
        }
        else if (n > 2)
        {
            cout << "7 ";
        }

        if ((n == 2) && (d == 9))
        {
            cout << "9 ";
        }
        else if ((n > 2) && (n <= 5) && ((d == 3) || (d == 6) || (d == 9)))
        {
            cout << "9 ";
        }
        else if (n > 5)
        {
            cout << "9 ";
        }

        cout << endl;
    }
}