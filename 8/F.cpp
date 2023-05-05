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

    vector <long long> op(n);
    vector <long long> op1(n+1);

    cin >> k;

    long long sum = 0, temp;

    for (int i = 0; i < n-1; i++)
    {
        op[i] = k;
        sum += k;
        cin >> temp;
        long long t = max(k, temp);
        op1[i+1] = t;
        sum += t;
        k = temp;
    }

    op[n - 1] = k;
    sum += k;

    for (int i = 3; i <= n; i++)
    {
        for (int j = 1; j <= i - 2; j++)
        {
            op1[j] = max(op[i - 1], op1[j]);
            sum += op1[j];
        }
    }

    cout << sum;

    return 0;
}
