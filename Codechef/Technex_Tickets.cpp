// https://www.codechef.com/START175C/problems/P2_175

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
    int n;
    cin >> n;
    int t = 1;

    while (true)
    {
        if ((n == 1) || (n == 3))
        {
            break;
        }
        if (n > 2)
        {
            n -= 2;
        }
        else
        {
            n--;
        }
        t++;
    }
    cout << t << nl;
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