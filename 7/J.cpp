#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

int bin_pow(long long a, long long n)
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
    long long b, pos, n, k, m;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    cin >> n >> m;

    long long su = 1, temp;

    if (n > m)
        swap(n, m);

    for (int i = 1; i <= n; i++)
    {
        su = (su * (m + i)) % mod;
        su *= bin_pow(i, mod - 2);
        su %= mod;
    }

    cout << su;
}
