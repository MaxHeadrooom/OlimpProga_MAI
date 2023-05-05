#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long bin_pow(long long a, long long n)
{
    long long res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        n /= 2;
    }
    return res;
}

long long fib_matrix(long long n)
{
    long long a = 1, ta, b = 1, tb, c = 1, rc = 0, tc, d = 0, rd = 1;

    while (n)
    {
        if (n & 1)
        {
            tc = rc;
            rc = ((rc * a)%mod + (rd * c)%mod)%mod;
            rd = ((tc * b)%mod + (rd * d)%mod)%mod;
        }

        ta = a; 
        tb = b; 
        tc = c;
        a = ((a * a) % mod + (b * c) % mod) % mod;
        b = ((ta * b) % mod + (b * d) % mod) % mod;
        c = ((c * ta) % mod + (d * c) % mod) % mod;
        d = ((tc * tb) % mod + (d * d) % mod) % mod;

        n >>= 1;
    }
    return rc;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, a, q, t;
    string s1, str, s;
    set <int> st;

    long long temp;

    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n;

        cout << fib_matrix(n) << '\n';
    }

    return 0;
}
