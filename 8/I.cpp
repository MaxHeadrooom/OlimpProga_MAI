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

long long f(long long x, long long y)
{
    while (x < 0)
    {
        x += y;
    }
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, a, q, t;
    string s1, str, s;
    set <int> st;

    cin >> n;

    vector <long long> op;

    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        sum = (sum + k);
    }

    long long temp = sum * bin_pow(2, n - 1);
    if (n < 50000)
        cout << (sum * bin_pow(2, n - 1)) % mod;
    else
        cout << f(temp, mod) % mod;

    return 0;
}
