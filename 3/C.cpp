#include <bits/stdc++.h>

using namespace std;

struct point
{
    string s;
    int och;
    int shtr;
};
bool cmp(point x, point y)
{
    if (x.och != y.och)
    {
        return x.och > y.och;
    }
    else if (x.shtr != y.shtr)
    {
        return x.shtr <  y.shtr;
    }
    else 
    {
        return x.s < y.s;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    long long a, b, pos, su1, n, su;
    string s, s1;
    char x;
    vector <point> m(1000000);
    su1 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m[i].s >> m[i].och >> m[i].shtr;
    }
    sort(m.begin() + 1, m.begin() + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        cout << m[i].s << "\n";
    }
};
