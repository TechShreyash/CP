// PROBLEM LINK

#include <bits/stdc++.h>
using namespace std;

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

        int n, m;
        cin >> n >> m;
        int perm[n];
        bool possible = true;

        for (int i = 0; i < n; i++)
        {
            int cards[m];

            for (int j = 0; j < m; j++)
            {
                cin >> cards[j];
            }

            sort(cards, cards + m);

            for (int j = 1; j < m; j++)
            {
                if ((cards[j] - cards[j - 1]) != n)
                {
                    // not possible
                    possible = false;
                    break;
                }
            }

            perm[cards[0]] = i + 1;
        }

        if (!possible)
        {
            cout << -1 << endl;
        }
        else
        {

            for (int j = 0; j < n; j++)
            {
                cout << perm[j] << " ";
            }
            cout << endl;
        }
    }
}