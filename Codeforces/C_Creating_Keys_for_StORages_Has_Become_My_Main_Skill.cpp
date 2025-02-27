// https://codeforces.com/contest/2072/problem/C

// clang-format off
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef vector<pll> vpll;

#define nl "\n"
#define PI 3.141592653589793238462

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define p1 first
#define p2 second
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define println(...) do { auto print = [&](auto&&... args) { ((std::cout << args << " "), ...); }; print(__VA_ARGS__); std::cout << "\n"; } while(0)

#ifndef ONLINE_JUDGE
    #include "debug.hpp"
#else
    #define debug(x)
#endif

// clang-format on

void solve()
{
    ll n, x;

    cin >> n >> x;

    ll orr = 0;
    ll preorr = 0;

    ll turns = 0;

    vector<ll> ops;
    vector<ll> ops2;

    for (int i = 0; i < n; i++)
    {
        turns++;
        orr = orr | i;

        if (orr == x)
        {
            ops.push_back(turns);
        }
        if ((orr | x) == x)
        {
            ops2.push_back(turns);
        }
    }

    if (ops.size() > 0)
    {
        turns = ops.back();

        for (int i = 0; i < turns; i++)
        {
            cout << i << " ";
        }
        for (int i = 0; i < (n - turns); i++)
        {
            cout << 0 << " ";
        }
        cout << nl;
    }
    else
    {

        if (ops2.size() > 0)
        {
            // dbg(ops2);

            turns = ops2.back();
            ll c = 0;
            for (int i = 0; i < min((n - 1), turns); i++)
            {
                cout << i << " ";
                c++;
            }
            for (int i = 0; i < (n - c - 1); i++)
            {
                cout << 0 << " ";
            }
            cout << x << nl;
        }
        else
        {
            for (int i = 0; i < (n - 1); i++)
            {
                cout << 0 << " ";
            }
            cout << x << nl;
        }
    }
}

int main()
{
    fastio();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}