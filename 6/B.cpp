#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll ost = 1e9 + 7;
ll op[100][1000][2];
ll otv[101][1000][2];

ll f(ll k1, ll s1, ll pos);

ll schet(ll k2, ll s2, ll i)
{
    if (i >= 10)
        return 0;
    else
        return f(k2 - 1, s2 - i, 0) + schet(k2, s2, i + 1);
};

ll f(ll k1, ll s1, ll pos)
{
    if (k1 < 0 or s1 < 0 or s1 > k1 * 9)
    {
        return 0;
    }
    else
        if (s1 == 0)
        {
            return 1;
        }
        else
            if (op[k1][s1][pos] == 0)
            {
                op[k1][s1][pos] = schet(k1, s1, pos) % 1000000007;
                return op[k1][s1][pos];
            }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, t, s, l, r, sum;
    string s1, str;
    set <int> st;
    queue <int> q;

    cin >> l >> r;

    vector<long> v(r + 1, 1);
    for (long i = 2; i * 2 <= r; i++) 
        for (long j = 2; i * j <= r; j++) 
            v[i * j] += v[i];

    sum = 0;
    for (long i = l; i <= r; i++) 
        sum += v[i];

    cout << sum % ost << '\n';
    return 0;
}
