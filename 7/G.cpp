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

    cin >> n >> m;

    vector <int> op;
    vector <int> op1;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        op.push_back(k);
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> k;
        op1.push_back(k);
    }

    long long l, r;

    cin >> l >> r;

    sort(op.begin(), op.end());
    sort(op1.begin(), op1.end());

    long long su = 0, t1, t2;

    for (int j = 0; j < n; j++)
        {
            t1 = lower_bound(op1.begin(), op1.end(), l - op[j]) - op1.begin();
            t2 = upper_bound(op1.begin(), op1.end(), r - op[j]) - op1.begin();
            su += t2 - t1;
        }
    double t11 = m * n;

    double temp = su /t11;

    cout << setprecision(15) << temp;
    return 0;
}
