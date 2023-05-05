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
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long b, pos, n, k, t, m;
    queue<int> q;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << n - i + 1 << " ";
    }

    return 0;
};
