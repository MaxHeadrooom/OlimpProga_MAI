#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long bin_pow(long long a, long long n)
{
    long long res = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        n = n >> 1;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, t, a, q;
    string s1, str, s;
    set <int> st;

    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> b >> q >> n;

        if (q == 1)
        {
            cout << (b * n) % mod << '\n';
            continue;
        }
        if (b == 0)
        {
            cout << 0 << '\n';
            continue;
        }
        if (q == 0)
        {
            cout << b << '\n';
            continue;
        }
        long long temp = bin_pow(q, n);
        temp -= 1;
        k = (temp * b) % mod;
        cout << (k * (bin_pow(q - 1, mod - 2)% mod)) % mod << '\n';
    }

    return 0;
}
