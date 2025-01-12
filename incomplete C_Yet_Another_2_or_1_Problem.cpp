// https://mirror.codeforces.com/gym/104683/problem/C

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPalindrome(string &s)
{
    int n = s.size();
    int mid = n / 2;

    for (int i = 0; i < n; i++)
    {
        int a = i;
        int b = n - i - 1;
        if (s[a] != s[b])
        {
            return false;
        }
    }
    return true;
}

void runF(string &s)
{
    if (isPalindrome(s))
    {
        s=s+s[s.size()-1];
    }
    else
    {
    }
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

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
    }
}