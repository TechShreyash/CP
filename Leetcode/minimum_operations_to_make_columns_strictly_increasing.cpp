// https://leetcode.com/problems/minimum-operations-to-make-columns-strictly-increasing/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<vector<int>> grid = {{3, 2, 1}, {2, 1, 0}, {1, 2, 3}};
    int op = 0;

    for (int j = 1; j < grid.size(); j++)
    {
        for (int i = 0; i < grid[0].size(); i++)
        {

            // cout << j << ":" << grid[j][i] << " " << j - 1 << ":" << grid[j - 1][i] << endl;
            if (grid[j - 1][i] >= grid[j][i])
            {
                op += grid[j - 1][i] - grid[j][i] + 1;
                grid[j][i] += grid[j - 1][i] - grid[j][i] + 1;
            }
        }
    }

    // for (int j = 0; j < grid.size(); j++)
    // {
    //     for (int i = 0; i < grid[0].size(); i++)
    //     {
    //         cout << grid[j][i] << " ";
    //     }
    //     cout << endl;
    // }
    cout << op;
}