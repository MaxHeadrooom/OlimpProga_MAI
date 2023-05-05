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
    long long b, n, k, m, a, q, t;
    string s1, str, s;
    set <int> st;

    cin >> n >> k;

    vector <int> op;

    long long min = 1e9 + 1;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        op.push_back(a);
        if (a < min)
            min = a;
    }

    for (int i = 0; i < n; i++)
        op[i] += min;

    sort(op.begin(), op.end());

    long long sum = 0, pos;

    for (int i = 0; i < n; i++)
    {
        pos = upper_bound(op.begin(), op.end(), op[i] + k) - op.begin() - 1;
        m = pos - i - 1;
        sum += (m * (m + 1)) / 2;
    }

    cout << sum;

    return 0;
}
