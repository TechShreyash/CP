// https://www.codechef.com/START171C/problems/WHITEWALL

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int op1 = 0; // RGB
    int op2 = 0; // RBG
    int op3 = 0; // GRB
    int op4 = 0; // GBR
    int op5 = 0; // BRG
    int op6 = 0; // BGR

    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            if (s[i] == 'R')
            {
                op3++;
                op4++;
                op5++;
                op6++;
            }
            else if (s[i] == 'B')
            {
                op3++;
                op4++;
                op1++;
                op2++;
            }
            else if (s[i] == 'G')
            {
                op5++;
                op6++;
                op1++;
                op2++;
            }
        }
        else if (i % 3 == 1)
        {
            if (s[i] == 'R')
            {
                op1++;
                op2++;
                op4++;
                op6++;
            }
            else if (s[i] == 'B')
            {
                op1++;
                op3++;
                op5++;
                op6++;
            }
            else if (s[i] == 'G')
            {
                op2++;
                op3++;
                op4++;
                op5++;
            }
        }
        else if (i % 3 == 2)
        {
            if (s[i] == 'R')
            {
                op1++;
                op2++;
                op3++;
                op5++;
            }
            else if (s[i] == 'B')
            {
                op2++;
                op4++;
                op5++;
                op6++;
            }
            else if (s[i] == 'G')
            {
                op1++;
                op3++;
                op4++;
                op6++;
            }
        }
    }

    int m = min({op1, op2, op3, op4, op5, op6});
    cout << m << br;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}