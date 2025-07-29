// https://codeforces.com/problemset/problem/919/B

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

bool isPerfect(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
        if (sum > 10)
        {
            break;
        }
    }

    if (sum == 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k;
    cin >> k;

    int n = 19;
    int counter = 1;

    while (counter != k)
    {
        n += 9;
        if (isPerfect(n))
        {
            counter++;
        }
    }

    cout << n;
}