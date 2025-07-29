// https://codeforces.com/contest/2072/problem/B

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
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll c1 = 0;
    ll c2 = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

    if ((c1 < 2) || (c2 == 0))
    {
        cout << 0 << nl;
        return;
    }

    ll x = c1 / 2;
    ll ans = (x) * (c1 - x) * c2;

    cout << ans << nl;
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