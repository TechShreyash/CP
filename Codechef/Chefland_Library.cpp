// https://www.codechef.com/START166D/problems/BORROWBOOK

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

        map<int, int> penalty;
        int total = 0;

        for (int i = 1; i <= n; i++)
        {
            // i = due days
            //  d return date
            int d;
            cin >> d;

            penalty[d] = max(penalty[d], i);
        }

        for (const auto &entry : penalty) {
            total += entry.second;
        }

        cout << total << endl;
    }
}