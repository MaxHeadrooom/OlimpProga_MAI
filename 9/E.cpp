#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, n, k, t, m;
    queue<int> q;

    cin >> t;

    for (int a = 1; a <= t; a++)
    {
        cin >> n >> m;

        vector<vector<long long>> op(n + 2, vector<long long>(m + 2));
        vector<vector<long long>> otv(n + 2, vector<long long>(m + 2));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> op[i][j];
                if (i == 1)
                    otv[i][j] = op[i][j];
            }
        }

        for (int i = 2; i <= n; i++)
        {
            long long ma = 0;

            for (int j = 1; j <= m; j++)
            {
                if (j == 1)
                {
                    otv[i][j] = max(op[i][j], otv[i - 1][j]);
                    continue;
                }
                for (k = 0; k <= j; k++)
                {
                    if (op[i][k] + otv[i - 1][j - k] > ma)
                        ma = op[i][k] + otv[i - 1][j - k];
                }
                otv[i][j] = max(otv[i-1][j], ma);
            }
        }

        /*for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << otv[i][j] << " ";
            }
            cout << endl;
        }*/

        cout << otv[n][m] << '\n';
    }

    return 0;
};
