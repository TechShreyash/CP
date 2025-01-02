#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                x++;
            }
        }

        if (x == 0)
        {
            cout << s.length() << endl;
            continue;
        }

        cout << 1 << endl;
    }

    return 0;
}
