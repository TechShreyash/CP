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

        int n;
        int k;
        cin >> n >> k;

        int members = 1;

        string s1;
        cin >> s1;

        for (int i = 1; i < n; i++)
        {
            string s2;
            cin >> s2;
            if (s1 == s2)
            {
                members++;
            }
        }
        cout<<members<<endl;
    }
}