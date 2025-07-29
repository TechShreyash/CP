// https://codeforces.com/problemset/problem/1714/A

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
        int n, H, M;
        cin >> n >> H >> M;

        int MIN = (H * 60) + M;
        int min_time = -1;

        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;

            int min = (h * 60) + m;
            int time = min - MIN;

            if (time < 0)
            {
                time = (24 * 60) - MIN + min;
            }

            if ((time < min_time) || (min_time == -1))
            {
                min_time = time;
            }
        }

        cout << min_time / 60 << " " << min_time % 60 << endl;
    }
}