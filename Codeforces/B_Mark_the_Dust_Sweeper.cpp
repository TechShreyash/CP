// https://codeforces.com/problemset/problem/1705/B

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
            cout << " "; // Add a space between elements except after the last one
    }
    cout << endl; // Move to the next line after printing all elements
}

bool areAllZero(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            return false; // If any element is not zero, return false
        }
    }
    return true; // All elements are zero
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

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
        }

        int x = 0;

        while (true)
        {
            bool skip = false;

            for (int i = 0; i < n - 1; i++)
            {
                if (areAllZero(arr,n-1))
                {
                    break;
                }
                if (arr[i]==0){
                    continue;
                }
                
                if (skip)
                {
                    skip = false;
                    continue;
                }

                arr[i]--;
                arr[i + 1]++;
                skip = true;
            }
            printArray(arr, n);
            cout<<areAllZero(arr,n-1)<<endl;

            if (areAllZero(arr,n-1))
            {
                break;
            }
            x++;
        }

        cout << x << endl;
        // break;
    }
}