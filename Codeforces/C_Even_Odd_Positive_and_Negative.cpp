// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    while (n > 0)
    {
        n--;

        int x;
        cin >> x;

        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (x > 0)
        {
            pos++;
        }
        if (x < 0)
        {
            neg++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
}