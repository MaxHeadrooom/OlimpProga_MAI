#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m;
    string s1, str;
    set <int> st;
    queue <int> q;

    cin >> n;

    vector < vector <long>> d(n+1);
    vector<long> row(n + 1);

    for (int i = 0; i < n + 1; i++)
    {
        d[i] = row;
        for (int j = 0; j < n + 1; j++)
            d[i][j] = 0;
    }

    d[0][0] = 1;
    d[1][1] = 1;

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 and i != 0)
                d[i][j] = 0;

            if (i > 0 and j > 0)
                d[i][j] = (d[i - j][j - 1] + d[i][j - 1]) % 1000000007;

        }
        for (int j = i + 1; j < n + 1; j++)
            d[i][j] = d[i][i];
    }
    cout << d[n][n] % 1000000007;
}
