#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, t, s, a1, b1, a2, b2, a3, b3, a4, b4;
    string s1, str;
    set <int> st;
    queue <int> q;

    vector <vector<int>> op(101, vector<int>(1001));

    op[1][0] = 1;

    for (int i = 1; i <= 9; i++)
        op[1][i] = 1;

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 991; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                if (j - k > 0)
                    op[i][j] = (op[i][j] + op[i-1][j-k])% 1000000007;
            }
        }
    }

    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n >> s;

        long long su=0;

        for (int j = 0; j <= n; j++)
            su = (su + op[j][s]) % 1000000007;
        
        cout << su << '\n';
     }

    return 0;
}
