// p

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        int n, a, b;
        cin >> n >> a >> b;

        if (abs(b-a)==1)
        {
            cout << "NO" << endl;
            continue;
        }


        if ((a == 1) && (b == 2))
        {
            cout << "NO" << endl;
            continue;
        }
        if ((a == n ) && (b == n - 1))
        {
            cout << "NO" << endl;
            continue;
        }

        if ((b == 1) && (a == 2))
        {
            cout << "YES" << endl;
            continue;
        }
        if ((b == n) && (a == n - 1))
        {
            cout << "NO" << endl;
            continue;
        }


        if (((abs(b-a)-1)%2)==0)
        {
            cout << "NO" << endl;
            continue;
        }
        else{
            cout << "YES" << endl;
            continue;
        }
    }
}