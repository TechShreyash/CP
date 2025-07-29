// https://codeforces.com/contest/2051/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int d = 0;
        int day = 0;
        int sum = a + b + c;
        day = ((n / sum) * 3) + 3;
        d = sum * (day / 3);

        int prev = d;
        char ch = 'c';
        while (true)
        {

            if (ch == 'a')
            {
                d -= a;
                ch = 'c';
            }
            else if (ch == 'b')
            {
                d -= b;
                ch = 'a';
            }
            else
            {
                d -= c;
                ch = 'b';
            }
            
            if (d < n)
            {
                d = prev;
                break;
            }

            day--;
        }

        cout << day << endl;
    }
}