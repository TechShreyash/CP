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

int kthMax(int k, vector<int> arr)
{
    int n = arr.size();

    for (int i = 0; i < k - 1; i++)
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
    return arr[0];
}
int kthMin(int k, vector<int> arr)
{
    int n = arr.size();

    for (int i = 0; i < arr.size() - k; i++)
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
    return arr[0];
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

    int k;
    cin >> k;

    cout << k << "th Max : " << kthMax(k, arr) << endl;
    cout << k << "th Min : " << kthMin(k, arr) << endl;
    cout << endl;
}

int main()
{
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}