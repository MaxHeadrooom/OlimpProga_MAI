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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, a, q;
    string s1, str, s;
    set <int> st;

    cin >> n >> k;

    long long fact_k = 1, fact_n = 1;

    if (n < k)
    {
        cout << 0;
        exit(0);
    }

    if (n == k)
    {
        for (int i = 1; i <= n; i++)
            fact_n = (fact_n * i) % mod;

        cout << fact_n;
        exit(0);
    }

    for (int i = 1; i <= n; i++)
    {
        if (i > (n - k))
            fact_n = (fact_n * i) % mod;
        if (i <= k)
            fact_k = (fact_k * i) % mod;
    }

    cout << ((fact_n * fact_n) % mod) * ((bin_pow(fact_k, mod - 2) % mod))% mod;
    return 0;
}
