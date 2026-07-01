ll MOD = 998244353;
ll MAXN = 2e5 + 5;

ll fact[MAXN];
long long invFact[MAXN];

void precompute()
{
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < MAXN; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAXN - 1] = powermod(fact[MAXN - 1], MOD - 2);
    for (int i = MAXN - 2; i >= 1; i--)
    {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

long long nCr(int n, int r)
{
    if (r < 0 || r > n)
        return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}
