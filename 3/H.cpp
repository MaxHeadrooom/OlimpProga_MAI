#include <bits/stdc++.h>

using namespace std;

struct point
{
    int x;
    int y;
};

bool cmp(int x, int y)
{
    return x > y;
};

int main()
{
    ios::sync_with_stdio(false);
    long long a, b, pos, su1, n, k, su;
    string s, s1;
    char x;
    vector <int> m(100000);
    su1 = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> m[i];
    }

    sort(m.begin() + 1, m.begin() + n + 1, cmp);

    pos = 1;
    su = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % k != 0)
            su += m[i];
    }

    cout << su;

    return 0;
};
