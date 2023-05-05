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
    long long pos, val;
};

bool operator<(point& l, point& r)
{
    if (l.pos != r.pos)
        return l.pos < r.pos;
    return l.val > r.val;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, a, q, t;
    string s1, str, s;
    set <int> st;

    cin >> n >> q;

    vector <point> op;
    vector<long long> op1(n);

    long long sum = 0, l, r, v, razn;

    k = 0;
    razn = 0;

    for (int i = 0; i < q; i++)
    {
        cin >> l >> r >> v;
        op.push_back(point{l, v});
        op.push_back(point{r + 1, -v});
    }

    sort(op.begin(), op.end());

    for (int i = 0; i < n; i++)
    {
        if (k > 0)
            razn = (op[k].pos - op[k - 1].pos);

        if (razn > 1)
        {
            for (int m = 0; m < razn - 1; m++)
            {
                op1[i] = sum;
                i++;
            }

        }

        if (op[k].pos <= n)
        {
            if (op[k].pos == i + 1)
            {
                sum += op[k].val;
                k++;
                while (op[k].pos == op[k - 1].pos and op[k].pos <= n)
                {
                    sum += op[k].val;
                    k++;
                }
            }
            op1[i] = sum;
        }
    }

    op1[n - 1] = sum;

    for (long long elem : op1)
        cout << elem << ' ';
    return 0;
}
