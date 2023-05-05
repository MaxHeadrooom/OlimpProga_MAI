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
    long long b, pos, n, k, m, a, q, t;
    string s1, str, s;
    set <int> st;

    cin >> n;

    vector <long long> op;
    vector <long long> prev(n + 1, 0);

    prev[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        prev[i] = prev[i - 1] + k;
    }

    cin >> m;

    long long l, r;

    for (int i = 1; i <= m; i++)
    {
        cin >> l >> r;
        cout << prev[r] - prev[l - 1] << '\n';
    }

    return 0;
}
