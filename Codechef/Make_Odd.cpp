// https://www.codechef.com/problems/P2P

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

        string sa, sb;
        cin >> sa >> sb;

        int score = 0;

        string a1, a2;

        int amax, bmax;

        for (int i = 0; i < n; i++)
        {

            if (sa[i] == sb[i])
            {
                if (sa[i] == '1')
                {
                    score++;
                }
            }
            else
            {
                a1 += sa[i];
                a2 += sb[i];

            }
        }

        if ((a1 == "") && ((score % 2 == 0)))
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}