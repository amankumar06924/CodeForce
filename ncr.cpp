#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6;
const ll mod = 1e9 + 7;
ll fac[maxn], invfac[maxn];

// a^b;
ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b % 2 == 0)
    {
        ll x = power(a, b / 2);
        return (x * x) % mod;
    }
    else
    {
        ll x = power(a, b / 2);
        ll ans = (x * x) % mod;
        return (ans * a) % mod;
    }
}

ll inverse(ll a)
{
    return power(a, mod - 2);
}

void compute_factorial()
{
    fac[0] = 1;
    for (int i = 1; i < maxn; i++)
    {
        fac[i] = (fac[i - 1] * i) % mod;
        invfac[i] = inverse(fac[i]);
    }
}

// compute ncr
ll ncr(ll N, ll R)
{
    if (N < 0 || R < 0 || R > N)
    {
        return 0;
    }
    ll num = fac[N];
    ll den = (invfac[R] * invfac[N - R]) % mod;
    return (num * den) % mod;
}

int main()
{
    compute_factorial();
    cout << ncr(5,2) << endl;
    return 0;
}