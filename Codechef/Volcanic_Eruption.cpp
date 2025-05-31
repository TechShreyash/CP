// https://www.codechef.com/START171C/problems/VOLCANO

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

void solve()
{
    int n, p;
    cin >> n >> p;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int h = arr[i];
        if (h == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            // go left
            int t1;
            bool done1 = false;
            int htemp = h;

            if (i > 0)
            {

                for (int j = i - 1; j >= 0; j--)
                {
                    if (arr[j] == 0)
                    {
                        done1 = true;
                        if (h % p == 0)
                        {
                            t1 = h / p;
                        }
                        else
                        {
                            t1 = (h / p) + 1;
                        }
                        break;
                    }
                    else
                    {
                        h = max(h, arr[j]);
                    }
                }
            }

            // go right
            int t2;
            bool done2 = false;
            h = htemp;

            if (i < n - 1)
            {

                for (int j = i + 1; j < n; j++)
                {
                    if (arr[j] == 0)
                    {
                        done2 = true;
                        if (h % p == 0)
                        {
                            t2 = h / p;
                        }
                        else
                        {
                            t2 = (h / p) + 1;
                        }
                        break;
                    }
                    else
                    {
                        h = max(h, arr[j]);
                    }
                }
            }

            if (done1 && done2)
            {
                cout << min(t1, t2) << " ";
            }
            else if (done1)
            {
                cout << t1 << " ";
            }
            else
            {
                cout << t2 << " ";
            }

            // cout << br << "t1:" << t1 << " t2:" << t2 << br;
        }
    }
    cout << br;
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