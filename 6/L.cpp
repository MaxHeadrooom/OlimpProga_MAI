#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    int d = gcd(b % a, a);
    return d;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, t, s;
    string s1, str;
    set <int> st;
    queue <int> q;

    cin >> n;

    vector <long long> op(150, 0);

    op[1] = 1;
    op[2] = 1;
    op[3] = 2;

    if (n == 1)
    {
        cout << 1;
        exit(0);
    }

    if (n == 2)
    {
        cout << 1;
        exit(0);
    }
    if (n == 3)
    {
        cout << 2;
        exit(0);
    }

    for (int i = 4; i <= n; i++)
    {
        op[i] = op[i - 1] + op[i - 3] + 1;
    }

    cout << op[n];
    return 0;
}
