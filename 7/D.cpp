#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long f(long long n)
{
    long long col = 1;
    for (int i = 1; i <= n; i++)
    {
        col = (col * i) % mod;
    }
    return col;
}

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
    long long b, pos, n, k, m, t, a;
    string s1, str, s;
    set <int> st;
    queue <int> q;

    cin >> s;

    vector <int> op(27, 0);

    for (int i = 0; i < s.length(); i++)
    {
        op[s[i] - 97]++;
    }

    long long fact = 1;

    for (int i = 2; i <= s.length(); i++)
    {
        fact = (fact * i) % mod;
    }

    long long otv = 1;

    for (int j = 0; j < 27; j++)
    {
        if (op[j] > 1)
        {
            for (int i = 2; i <= op[j]; i++)
            {
                otv = (otv * i) % mod;
            }
        }
    }

    cout << (fact * bin_pow(otv, mod - 2)) % mod << endl;

    return 0;
}
