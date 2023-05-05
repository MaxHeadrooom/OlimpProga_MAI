#include <bits/stdc++.h>

using namespace std;
vector <long long> result;

int gcd(long long a, long long b, long long & x, long long & y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long g = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m, a, c, x, y;
    string s, s1, str;
    vector <int> op;
    set <int> st;
    queue <int> q;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        cin >> a >> b >> c;
        long long x, y;
        long long g = gcd(a, b, x, y);
        if (c % g != 0)
        {
            cout << -1 << '\n';
            continue;
        }
        k = c / g;
        cout << g << " " << x*k << " " << y * k << '\n';
    }
}
