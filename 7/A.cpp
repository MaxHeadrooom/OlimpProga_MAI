#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

int bin_pow(long long a, long long n, int mod)
{
    int res = 1;
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
    long long b, pos, n, k, m, t, s, a;
    string s1, str;
    set <int> st;
    queue <int> q;

    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> a >> n;
        cout << bin_pow(a, n, mod) << '\n';
    }

    return 0;
}
