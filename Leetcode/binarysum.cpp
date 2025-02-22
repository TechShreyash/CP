// https://leetcode.com/problems/add-binary/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br "\n"

string addBinary(string a, string b)
{
    string c;
    int n1 = a.size();
    int n2 = b.size();
    int n = min(n1, n2);
    if (n1 < n2)
    {
        string fill(n2 - n, '0');
        a = fill + a;
    }
    else if (n2 < n1)
    {
        string fill(n1 - n, '0');
        b = fill + b;
    }
    n = max(n1, n2);

    // cout << a << " " << b << br;

    bool carry = false;

    for (int i = n - 1; i >= 0; i--)
    {
        int x = a[i] - '0';
        int y = b[i] - '0';

        // cout << x << " " << y << br;
        int sum = x + y;

        if (carry)
        {
            sum++;
        }

        c = (char)((sum % 2) + '0') + c;

        sum /= 2;
        if (sum == 1)
        {
            carry = true;
        }
        else
        {
            carry = false;
        }
    }

    if (carry)
    {
        c = '1' + c;
    }

    return c;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b) << endl;
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