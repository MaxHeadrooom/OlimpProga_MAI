#include <bits/stdc++.h>

using namespace std;

struct point
{
    long long znach, pos;
};

bool operator<(point x, point y)
{
    return x.znach < y.znach;
}

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, n, k, t;
    queue<int> q;

    cin >> t;

    for (int z = 1; z <= t; z++)
    {

        cin >> n;
        vector<point> d(n + 2);
        vector<point> a(n + 2);

        for (int i = 0; i < n; i++)
        {
            cin >> k;
            a[i].znach = k;
            a[i].pos = i;
        }

        d[0].znach = -1e18;
        d[0].pos = -1;
        for (int i = 1; i <= n; i++)
        {
            d[i].znach = 1e18;
            d[i].pos = 1e18;
        }

        long long col = 0;

        vector<long long> prev(n);

        for (int i = 0; i < n; i++)
        {
            long long j = lower_bound(d.begin(), d.end(), a[i]) - d.begin();
            if (j > col)
            {
                col++;
                j = col;
            }
            d[j].znach = a[i].znach;
            d[j].pos = i;
            prev[i] = d[j - 1].pos;
        }

        cout << col << '\n';

        vector<int> answer;
        int p = d[col].pos;
        while (p != -1)
        {
            answer.push_back(a[p].pos + 1);
            p = prev[p];
        }
        reverse(answer.begin(), answer.end());

        for (int i = 0; i < col; i++)
            cout << answer[i] << " ";

        cout << '\n';
    }

    return 0;
};
