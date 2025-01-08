// https://www.codechef.com/problems/BIG

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

        int arr[n];
        int max = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] > max)
            {
                cout << 1 << " ";
                max = arr[i];
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}