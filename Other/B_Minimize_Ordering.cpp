// https://atcoder.jp/contests/abc242/tasks/abc242_b

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int l = s.length();
    char arr[l];

    for (int i = 0; i < l; i++)
    {
        arr[i] = s[i];
    }

    sort(arr, arr + l);

    for (int i = 0; i < l; i++)
    {
        cout << arr[i];
    }
}