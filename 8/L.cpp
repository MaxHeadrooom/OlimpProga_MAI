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

struct point
{
    long long left, right;
};

bool cmp(point x, point y)
{
    return x.right < y.right;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, a, q, t;
    string s1, str, s;
    set <int> st;

    cin >> n;

    vector <point> op;

    long long r_gr = -1e9 - 1;
    long long l, r;

    for (int i = 1; i <= n; i++)
    {
        cin >> l >> r;
        op.push_back(point{l, r});
    }

    sort(op.begin(), op.end(), cmp);

    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (op[i].left >= r_gr)
        {
            r_gr = op[i].right;
            sum++;
        }
    }

    cout << sum;

    return 0;
}
