// https://www.naukri.com/code360/problems/find-the-single-element_6680465

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int getSingleElement(vector<int> &arr)
{

    int start = 0;
    int end = arr.size() - 1;

    if (arr[0] != arr[1])
    {
        return arr[0];
    }
    if (arr[end] != arr[end - 1])
    {
        return arr[end];
    }

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if ((arr[mid - 1] != arr[mid]) && (arr[mid + 1] != arr[mid]))
        {
            return arr[mid];
        }

        if (arr[mid - 1] == arr[mid])
        {
            if ((mid - 1) % 2 == 0)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 2;
            }
        }

        else if (arr[mid + 1] == arr[mid])
        {
            // cout << end - mid - 1 << endl;

            if ((end - mid - 1) % 2 == 0)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 2;
            }
        }

        mid = start + (end - start) / 2;
        // cout << start << " " << mid << " " << end << endl;
    }

    return arr[start];
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
        int n;
        cin >> n;

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        cout << getSingleElement(arr) << endl;
    }
}
