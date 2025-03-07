// https://www.codechef.com/problems/SAME_AND

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
    ll n, m;
    cin >> n >> m;

    ll count = 0;

    std::bitset<64> nb(n);
    string ns = nb.to_string();
    ns.erase(0, ns.find_first_not_of('0'));
    if (ns.empty())
    {
        ns = "0";
    }

    string xs = "1";

    vector<ll> nums;
    nums.pb(n);

    ll sl = ns.length();

    vector<string> bstring;
    bstring.pb(ns);

    if (n == 0)
    {
        cout << m + 1 << nl;

        for (int i = 0; i <= m; i++)
        {
            cout << i << " ";
        }
        cout << nl;
        return;
    }

    for (int i = 1; i < sl; i++)
    {
        if (ns[i] == '0')
        {

            // type 2
            string b = ns;
            b[i] = '1';
            bstring.pb(b);

            ll num = std::stoll(b, nullptr, 2);

            if (num <= m)
            {
                // dbg(num, bs);

                count++;
                nums.pb(num);
            }
        }
    }

    while (true)
    {
        // type 3
        ll bl = bstring.size();
        bool good = false;

        for (ll i = 0; i < bl; i++)
        {
            string binStr = xs + bstring[i];
            ll num = std::stoll(binStr, nullptr, 2);

            if (num <= m)
            {
                dbg(num, binStr);
                count++;
                nums.pb(num);
                good = true;
            }
        }
        if (good)
        {

            xs += "0";
        }
        else
        {
            break;
        }
    }

    if (count == 0)
    {
        cout << -1 << nl;
    }
    else
    {
        ll l = nums.size();
        cout << l << nl;

        for (int i = 0; i < l; i++)
        {
            cout << nums[i] << " ";
        }
        cout << nl;
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