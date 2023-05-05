#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

const long long inf = 1e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    for (int a = 1; a <= 1; a++)
    {
        cin >> n >> m;
        vector<long long> c(n);
        vector<long long> w(n);


        long long su = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> w[i] >> c[i];
            su += c[i];
        }

        vector<long long> dp_i_mi(su + 1, inf);
        vector<long long> dp_i(su + 1, inf);

        dp_i_mi[0] = 0;
        dp_i[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            dp_i.assign(su + 1, 0);
            for (int j = 1; j <= su; j++)
            {
                dp_i[j] = dp_i_mi[j];
                if (j - c[i - 1] >= 0)
                    dp_i[j] = min(dp_i[j], dp_i_mi[j - c[i - 1]] + w[i-1]);
            }
            swap(dp_i, dp_i_mi);
        }

        long long maxx = -1;

        for (int i = su; i >= 0; i--)
        {
            if (dp_i_mi[i] <= m)
            {
                cout << i;
                break;
            }
        }
    }

}
