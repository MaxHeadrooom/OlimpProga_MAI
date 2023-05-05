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

    cin >> n >> m;

    vector <vector<int>> op(n + 1, vector<int>(m + 1));
    vector <vector<int>> res(n + 2, vector<int>(m + 2));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> op[i][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            res[i][j] = max(max(res[i - 1][j], res[i][j - 1]), res[i-1][j-1]) + op[i][j];
        }
    }
    cout << res[n][m];
}
