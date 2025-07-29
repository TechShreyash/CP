// https://codeforces.com/problemset/problem/831/A

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    int step = 1;
    bool unimodal = true;
    bool constant = false;

    cin >> arr[0];

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] > arr[i - 1])
        {
            if ((step == 2) || (step == 3))
            {
                unimodal = false;
                break;
            }
        }
        else if (arr[i] == arr[i - 1])
        {
            if (step == 3)
            {
                unimodal = false;
                break;
            }

            step = 2;
            constant = true;
        }
        else if (arr[i] < arr[i - 1])
        {
            if (step == 1)
            {
                step = 3;

                if (i == 1)
                {
                    constant = true;
                    continue;
                }
                if (!(arr[i - 1] > arr[i - 2]))
                {
                    unimodal = false;
                    break;
                }
                else
                {
                    constant = true;
                }
            }
            step = 3;
        }
    }

    if (n == 1)
    {
        constant = true;
    }

    if (step == 1)
    {
        // for {1,2,3}
        constant = true;
    }

    if ((unimodal) && (constant))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}