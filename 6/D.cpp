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

    cin >> n >> k;
    vector <int> op(n + 1, 0);

    for (int i = 1; i < n; ++i)
    {
        cin >> op[i];
    }

    vector<long long> dp(n + 1, 1e18);
    vector<long long> p(n + 1);

    dp[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= k and i - j >= 0; j++)
        {
            if (dp[i - j] <= dp[i])
            {
                dp[i] = dp[i - j];
                p[i] = i - j;
            }
        }
        dp[i] += op[i];
    }
    cout << dp[n] << '\n';
    int u = n;
    vector<int> viv;
    while (p[u] != u)
    {
        viv.push_back(u);
        u = p[u];
    }
    viv.push_back(u);
    cout << viv.size() << '\n';
    reverse(viv.begin(), viv.end());
    for (int t : viv)
    {
        cout << t << " ";
    }
    return 0;
}
