#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

const int N = 1000005;

// Function to calculate modular exponentiation
ll power(ll base, ll exponent, ll mod)
{
    ll result = 1;
    base = base % mod;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        exponent = exponent / 2;
        base = (base * base) % mod;
    }
    return result;
}

// Function to calculate modular inverse
ll modInverse(ll n, ll mod)
{
    return power(n, mod - 2, mod);
}

// Function to calculate nCr modulo MOD
ll nCr(ll n, ll r)
{
    if (r > n)
        return 0;
    if (r == 0)
        return 1;

    ll num = 1, den = 1;

    // Calculate numerator: n * (n-1) * ... * (n-r+1)
    for (ll i = n; i > n - r; --i)
    {
        num = (num * i) % MOD;
    }

    // Calculate denominator: r!
    for (ll i = 1; i <= r; ++i)
    {
        den = (den * i) % MOD;
    }

    // Calculate nCr using modular inverse
    return (num * modInverse(den, MOD)) % MOD;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> s(n);
        for (auto &x : s)
            cin >> x;

        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        vector<int> a(m), b(m);

        for (int i = 0; i < m; i++)
            a[i] = (s[n - 1][i] == '1');

        if (accumulate(a.begin(), a.end(), 0) == 1)
            fill(a.begin(), a.end(), 0);

        for (int i = n - 2; i > 0; i--)
        {
            b = a;
            fill(a.begin(), a.end(), 0);

            for (int j = 0; j < m; j++)
                a[j] = (s[i][j] == '1');

            int f = 0;
            for (int j = 0; j < m; j++)
                f += (a[j] && b[j]);

            if (f)
            {
                for (int j = 0; j < m; j++)
                    a[j] |= b[j];
            }

            if (accumulate(a.begin(), a.end(), 0) == 1 ||
                    count(s[i].begin(), s[i].end(), '1') == 1)
                fill(a.begin(), a.end(), 0);
        }

        int cnt1 = 0, cnt0 = 0;

        for (int i = 0; i < m; i++)
        {
            cnt0 += (s[0][i] == '0' && a[i]);
            cnt1 += (s[0][i] == '1' && a[i]);
        }

        cout << nCr(cnt0 + cnt1, cnt1) << "\n";
    }
    return 0;
}
