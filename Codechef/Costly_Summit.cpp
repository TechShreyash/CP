// https://www.codechef.com/START176C/problems/LSU

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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cost = 0;

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    for (auto i : s)
    {
        if (i == 'A')
        {
            a++;
        }
        else if (i == 'B')
        {
            b++;
        }
        else if (i == 'C')
        {
            c++;
        }
        else if (i == 'D')
        {
            d++;
        }
        else if (i == 'E')
        {
            e++;
        }
    }

    int arr[5] = {a, b, c, d, e};
    sort(arr, arr + 5);

    int hire = 1;

    for (auto i : arr)
    {

        int hcost = 0;
        for (int j = 0; j < i; j++)
        {
            hcost += hire + j;
        }

        int lcost = k;

        // dbg(lcost, hcost);
        if (lcost <= hcost)
        {
            cost += lcost;
        }
        else
        {
            cost += hcost;
            hire += i;
        }
    }

    cout << cost << nl;
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