#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    cin >> n >> m >> k;

    vector <vector<int>> op(n + 1, vector<int>(m + 1));

    op[0][0] = 1;

    int x, y;

    for (int i = 1; i <= k; i++)
    {
        cin >> x >> y;
        op[x][y] = -1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (op[i][0] != -1)
            op[i][0] = 1;
        else
            break;
    }

    for (int i = 1; i <= m; i++)
    {
        if (op[0][i] != -1)
            op[0][i] = 1;
        else
            break;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (op[i][j] != -1)
                if (op[i - 1][j] == -1)
                    op[i][j] = op[i][j - 1];
                else if (op[i][j - 1] == -1)
                    op[i][j] = op[i - 1][j];
                else
                    op[i][j] = (op[i - 1][j] + op[i][j - 1]) % 1000000007;
        }
    }
    if (op[n][m] == -1)
        cout << 0;
    else
        cout << op[n][m];
}
