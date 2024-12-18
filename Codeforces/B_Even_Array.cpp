// https://codeforces.com/problemset/problem/1367/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        t--;

        int n;
        cin >> n;

        int a[n];
        int even_bad_index = 0, odd_bad_index = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if ((i % 2) != (a[i] % 2))
            {
                if (a[i] % 2 == 0)
                {
                    even_bad_index++;
                }
                else
                {
                    odd_bad_index++;
                }
            }
        }

        if ((even_bad_index + odd_bad_index) == 0)
        {
            cout << 0<<endl;
        }
        else if (even_bad_index != odd_bad_index)
        {
            cout << -1<<endl;
        }
        else
        {
            cout << even_bad_index <<endl;
        }
    }
}