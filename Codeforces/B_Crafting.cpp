// p

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

        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int no_of_less_material = 0;

        int less_material_index = 0;

        int no_of_equal_material = 0;
        int max_increment = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];

            if (a[i] < b[i])
            {
                no_of_less_material++;
                less_material_index = i;
            }
            else if (a[i] == b[i])
            {
                no_of_equal_material++;
            }
            else
            {
                if (max_increment == -1)
                {
                    max_increment = a[i] - b[i];
                }
                else
                {
                    max_increment = min(a[i] - b[i], max_increment);
                }
            }
        }

        if (no_of_less_material == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if (no_of_less_material > 1)
        {
            cout << "NO" << endl;
            continue;
        }

        if (no_of_less_material == 1)
        {
            if (no_of_equal_material > 0)
            {
                cout << "NO" << endl;
                continue;
            }
            else
            {
                int x = b[less_material_index] - a[less_material_index];
                // cout << max_increment << " " << x << endl;

                if (max_increment >= x)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}