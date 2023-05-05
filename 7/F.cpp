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

typedef unsigned long long ull;

ull was_here[4010][4010];

ull rec(ull n, ull k)
{
    if (was_here[n][k])
        return was_here[n][k];

    if (n == k)
        was_here[n][k] = 1;
    else if (k == 1)
        was_here[n][k] = n;
    else
        was_here[n][k] = (rec(n - 1, k - 1) % mod) + (rec(n - 1, k) % mod);

    return was_here[n][k];
}

int raschet(long long a, long long m)
{
    if (a < 1 or m < 2)
    {
        cout << -1;
        exit(0);
    }
    long long per1 = m, temp1 = 0, per2 = a, temp2 = 1;

    while (per2 != 0)
    {
        long long q = per1 / per2;
        long long t1 = per1 - q * per2;
        long long t2 = temp1 - q * temp2;
        per1 = per2;
        temp1 = temp2;
        per2 = t1;
        temp2 = t2;
    }

    if (per1 == 1)
        return (temp1 + m) % m;
    else
    {
        cout << -1;
        exit(0);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, a, q;
    string s1, str, s;
    set <int> st;

    cin >> n >> k;

    long long i = n, j = n - k;

    long long temp = bin_pow(2, i + j);
    long long t = rec(i + j, i) % 1000000007;
    long long t1 = bin_pow(temp, mod - 2);
    cout << (t * t1) % 1000000007;
    return 0;
}
