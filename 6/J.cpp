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

    cin >> t;

    for (int a = 1; a <= t; a++)
    {
        cin >> n >> m;

        vector <vector<int>> op(n + 1, vector<int>(m + 1));

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> op[i][j];

        long long temp = gcd(op[1][1], op[n][m]);

        long long max = -1;

        for (int k = 1; k <= temp; k++)
        {
            if (temp % k == 0)
            {
                vector <vector<int>> v(n + 1, vector<int>(m + 1));
                v[1][1] = 1;

                for (int i = 1; i <= n; i++)
                    for (int j = 1; j <= m; j++)
                        if (op[i][j] % k == 0 and (v[i - 1][j] == 1 or v[i][j - 1] == 1))
                            v[i][j] = 1;
                if (v[n][m] == 1)
                    if (k > max)
                        max = k;
            }
        }
        cout << max << '\n';
    }


    return 0;
}
