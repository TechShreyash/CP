// https://codeforces.com/problemset/problem/1818/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        t--;

        int n; // member
        int k; // topics
        cin >> n >> k;

        string opinions[n] = {""};
        int removed[n] = {0};

        for (int i = 0; i < n; i++)
        {
            // save opinions
            string s;
            cin >> s;
            opinions[i] = s;
        }

        for (int i = 0; i < k; i++)
        {
            // check for each discussion
            int overall_opinion = 0;

            for (int j = 0; j < n; j++)
            {
                if (opinions[j][i] == '+')
                {
                    overall_opinion++;
                }
                else
                {
                    overall_opinion--;
                }
            }

            cout << "overall:" << overall_opinion << endl;

            for (int j = 0; j < n; j++)
            {
                if (removed[j] == 1)
                {
                    continue;
                }

                if (overall_opinion == 0)
                {
                    removed[j] = 1;
                }
                else if (overall_opinion > 0)
                {
                    if (opinions[j][i] == '-')
                    {
                        removed[j] = 1;
                    }
                }
                else if (overall_opinion < 0)
                {
                    if (opinions[j][i] == '+')
                    {
                        removed[j] = 1;
                    }
                }
            }
        }

        int existing = 0;

        for (int i = 0; i < n; i++)
        {
            cout << opinions[i] << removed[i] << endl;
            if (removed[i] == 0)
            {
                existing++;
            }
        }
        cout << endl
             << endl;

        cout << existing << endl;
    }
}