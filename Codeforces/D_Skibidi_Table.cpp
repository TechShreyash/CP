// https://codeforces.com/contest/2093/problem/D

// clang-format off
#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define PI (3.141592653589)
#define M 1000000007
#define pb push_back
#define foreach(i, j, k, in) for(int i=j;i<k;i+=in)
#define rforeach(i, j, k, in) for(int i=j;i>=k;i-=in)
#define rep(i,j) foreach(i,0,j,1)
#define rrep(i,j) rforeach(i,j,0,1)
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define inint(x) int x; cin>>x;
#define inll(x) long long int x; cin>>x;
#define instr(x) string x; cin>>x;
#define all(x) x.begin(), x.end()
#define out(x) cout << x << endl;
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define pm cout<<"-1"<<endl
#define ps(x,y) fixed<<setprecision(y)<<x
#define sz(x) ((int)(x).size())
#define nl "\n"

//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef map<char,int> mci;
typedef set<int> st;

// Debug Overloads
#ifndef ONLINE_JUDGE
    #include "debug.hpp"
#else
    #define dbg(...)
#endif

// Operator Overloads
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s = to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

//Constants
vector <ll> primes;
vector <bool> is_prime;

// Mathematical functions
void Sieve(int n){ is_prime.assign(n + 1, true); is_prime[0] = is_prime[1] = false; for(ll i = 2; i * i <= n; i++) if(is_prime[i]) for(ll j = i * i; j <= n; j += i) is_prime[j] = false;}
void get_primes(int n){ for(int i = 2; i <= n; i++)  if(is_prime[i])  primes.push_back(i); }
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

// clang-format on

ll getNum(int n, ll x, ll y, ll first)
{
    if (n == 1)
    {
        if (x == 0 && y == 0)
        {
            return first;
        }
        else if (x == 1 && y == 1)
        {
            return first + 1;
        }
        else if (x == 1 && y == 0)
        {
            return first + 2;
        }
        else if (x == 0 && y == 1)
        {
            return first + 3;
        }
    }

    ll m = 1LL << (n - 1); // 2 ^(n-1)
    ll size = m * m;

    if (x < m && y < m)
    {
        // top left
        return getNum(n - 1, x, y, first);
    }
    else if (x >= m && y >= m)
    {
        // bottom right
        return getNum(n - 1, x - m, y - m, first + size);
    }
    else if (x >= m && y < m)
    {
        // bottom left
        return getNum(n - 1, x - m, y, first + (2 * size));
    }
    else
    {
        // top right
        return getNum(n - 1, x, y - m, first + (3 * size));
    }
}

pair<ll, ll> getPos(int n, ll d, ll first = 1, ll x = 0, ll y = 0)
{
    if (n == 1)
    {

        if (first == d)
        {
            return {x + 1, y + 1};
        }
        else if (first + 1 == d)
        {
            return {x + 2, y + 2};
        }
        else if (first + 2 == d)
        {
            return {x + 2, y + 1};
        }
        else if (first + 3 == d)
        {
            return {x + 1, y + 2};
        }
    }

    ll m = 1LL << (n - 1);
    ll size = m * m;

    if (d < first + size)
    {
        // top left
        return getPos(n - 1, d, first, x, y);
    }
    else if (d < first + (2 * size))
    {
        // bottom right
        return getPos(n - 1, d, first + size, x + m, y + m);
    }
    else if (d < first + (3 * size))
    {
        // bottom left
        return getPos(n - 1, d, first + (2 * size), x + m, y);
    }
    else
    {
        // top right
        return getPos(n - 1, d, first + (3 * size), x, y + m);
    }
}

void solve()
{
    ll n, q;
    cin >> n >> q;

    rep(i, q)
    {
        string a;
        cin >> a;

        if (a == "->")
        {
            ll x, y;
            cin >> x >> y;
            cout << getNum(n, x - 1, y - 1, 1) << nl;
        }
        else
        {
            ll p;
            cin >> p;
            pair<ll, ll> a = getPos(n, p);
            cout << a.first << " " << a.second << nl;
        }
    }
}

int32_t main()
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