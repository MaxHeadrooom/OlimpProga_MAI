#include <bits/stdc++.h>

using namespace std;

struct point
{
    int x;
    int y;
};

bool cmp(point a, point b)
{
    return a.x < b.x;
};

int main()
{
    ios::sync_with_stdio(false);
    long long a, b, pos, su1, n, su;
    string s, s1;
    char x;
    vector <point> m(200000);
    su1 = 0;
    cin >> n >> su;

    for (int i = 1; i <= n; i++)
    {
        cin >> m[i].x;
        m[i].y = i;
    };

    sort(m.begin() + 1, m.begin() + n + 1, cmp);

    for (int i = 1; i <= n; i++)
    {
        if (su > m[i].x)
            su += m[i].x;
        else
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES" << '\n';
    for (int i = 1; i <= n; i++)
    {
        cout << m[i].y << " ";
    }
};
