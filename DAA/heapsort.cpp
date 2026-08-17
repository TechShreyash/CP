#include <bits/stdc++.h>
using namespace std;

void heapify(int i, int n, vector<int> &arr)
{
    int left = (2 * i) + 1, right = (2 * i) + 2;

    int largest = arr[i], idx = i;

    if (left < n && arr[left] > largest)
    {
        largest = arr[left];
        idx = left;
    }

    if (right < n && arr[right] > largest)
    {
        largest = arr[right];
        idx = right;
    }

    if (idx != i)
    {
        swap(arr[idx], arr[i]);
        heapify(idx, n, arr);
    }
}

void BuildMaxHeap(vector<int> &arr)
{
    int n = arr.size();

    for (int i = n / 2; i >= 0; i--)
    {
        heapify(i, n, arr);
    }
}

void HeapSort(vector<int> &arr)
{
    int n = arr.size();

    for (int k = 0; k < arr.size() - 1; k++)
    {
        swap(arr[0], arr[n - 1]);
        n--;
        heapify(0, n, arr);

        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    BuildMaxHeap(arr);

    cout << "Max Heap : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    HeapSort(arr);

    cout << "Heap Sort : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
}

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}