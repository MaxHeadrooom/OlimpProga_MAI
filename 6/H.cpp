#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, t;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    cin >> t;

    for (int a = 1; a <= t; a++)
    {
        cin >> n;
        vector <int> op(n);
        for (int i = 0; i < n; i++)
        {
            cin >> op[i];
        }
        vector<int> dp(n);
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            int ma = 0, pos_ma = -1;
            for (int j = 0; j < i; j++)
            {
                if (op[j] < op[i] and dp[j] > ma)
                {
                    ma = dp[j];
                    pos_ma = j;
                }
            }
            dp[i] = 1 + ma;
            v[i] = pos_ma;
        }
        int res = 0, res_pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (dp[i] > res)
            {
                res = dp[i];
                res_pos = i;
            }
        }
        int u = res_pos;

        vector<int> otv;
        while (v[u] != -1)
        {
            otv.push_back(u);
            u = v[u];
        }
        otv.push_back(u);
        cout << res << '\n';
        reverse(otv.begin(), otv.end());
        for (int temp : otv)
            cout << temp + 1 << " ";
        cout << '\n';
    }
}
