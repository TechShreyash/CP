// https://codeforces.com/problemset/problem/344/A

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int groups = 1;

    int prev_group;
    cin >> prev_group;

    for (int i = 1; i < n; i++)
    {
        int m;
        cin >> m;

        if (m != prev_group)
        {
            groups++;
            prev_group = m;
        }
    }

    cout << groups;
}