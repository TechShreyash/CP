// https://www.codechef.com/START175C/problems/P3_175

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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    ll one = 0;
    ll zero = 0;
    ll c1 = 0;
    ll c2 = 0;
    ll c3 = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s1[i] == '1')
        {
            one++;
            c1++;
        }
        else
        {
            zero++;
        }
        if (s2[i] == '1')
        {
            one++;
            c2++;
        }
        else
        {
            zero++;
        }
        if (s3[i] == '1')
        {
            one++;
            c3++;
        }
        else
        {
            zero++;
        }
    }

    if (zero % n != 0)
    {
        cout << -1 << nl;
        return;
    }

    ll x = zero / n;
    vll c = {c1, c2, c3};
    ll swaps = 0;

    // make zero string
    while (x > 0)
    {
        x--;
        ll y = -1;

        for (int i = 0; i < 3; i++)
        {
            if (c[i] != -1)
            {
                if (y == -1)
                {
                    y = c[i];
                }
                else
                {
                    y = min(y, c[i]);
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            if (y == c[i])
            {
                // cout << i << " zero" << nl;
                swaps += c[i];
                c[i] = -1;
                break;
            }
        }
    }

    cout << swaps << nl;
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