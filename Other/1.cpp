// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 8, k = 2;
    int arr[n] = {0, 0, 1, 1, 2, 2, 2, 2};

    int l = n, r = -1;

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    int prev = -1;

    // find left most
    while (start <= end)
    {
        if (mid == prev)
        {
            break;
        }
        prev = mid;

        // cout << mid << endl;

        if (arr[mid] == k)
        {
            if (mid < l)
            {
                l = mid;
            }
        }

        if (k <= arr[mid])
        {
            end = mid - 1;
        }
        if (k > arr[mid])
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    start = 0;
    end = n - 1;
    mid = start + (end - start) / 2;

    prev = -1;

    // find right most
    while (start <= end)
    {
        if (mid == prev)
        {
            break;
        }
        prev = mid;

        // cout << mid << endl;

        if (arr[mid] == k)
        {
            if (mid > r)
            {
                r = mid;
            }
        }

        if (k < arr[mid])
        {
            end = mid - 1;
        }
        if (k >= arr[mid])
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    if (l==n){
        l=-1;
    }

    cout << l << " " << r << endl;
}