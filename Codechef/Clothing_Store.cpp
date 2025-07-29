// https://www.codechef.com/START176C/problems/XLSL

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
#define isPrime(n) ([](ll x)->bool { if(x <= 1)return false; for(ll i = 2; i * i <= x; i++){ if(x % i == 0)return false; } return true; }(n))

#ifndef ONLINE_JUDGE
    #include "debug.hpp"
#else
    #define dbg(...) do {} while(0)
#endif

// clang-format on

void solve()
{
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;

    int total = 0;

    int small = min(x, a);
    total += small;
    x -= small;
    a -= small;

    int mid = min(y, b);
    total += mid;
    y -= mid;
    b -= mid;

    int high = min(z, c);
    total += high;
    z -= high;
    c -= high;

    if (a > 0)
    {
        if (y > 0)
        {
            small = min(y, a);
            total += small;
            y -= small;
            a -= small;
        }

        if (z > 0)
        {
            small = min(z, a);
            total += small;
            z -= small;
            a -= small;
        }
    }

    if (b > 0)
    {
        if (z > 0)
        {
            mid = min(z, b);
            total += mid;
            z -= mid;
            b -= mid;
        }
    }

    cout << total << nl;
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