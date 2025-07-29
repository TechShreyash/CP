// https://codeforces.com/problemset/problem/1269/A

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

map<int, int> cache; // 0 = not checked; 1=checked prime; 2= checked composite

bool isComposite(int &x)
{
    if (cache[x] == 2)
    {
        return true;
    }
    else if (cache[x] == 1)
    {
        return false;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            cache[x] = 2;
            return true;
        }
    }

    cache[x] = 1;
    return false;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int a = n + 2;; a++)
    {
        if (isComposite(a))
        {
            int b = a - n;
            if (isComposite(b))
            {
                cout << a << " " << b;
                break;
            }
        }
    }
}