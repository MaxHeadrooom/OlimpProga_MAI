#include <bits/stdc++.h>

using namespace std;

struct point
{
    double x = 0, y = 0, ugl = 0;
};

bool cmp(point x, point y)
{
    return x.ugl > y.ugl;
};

const long long iter = 5000;

int main() 
{
    ios::sync_with_stdio(false);
    long long b, pos, n, k;
    set<int> st;
    queue<int> q;

    double x, y, v1, v2, d;

    cin >> x >> y;

    cin >> v1 >> v2 >> d;

    double r = x, l = 0;

    for (int i = 1; i <= iter; i++)
    {
        double ll = (2 * l + r) / 3, rr = (l + 2 * r) / 3;

        double rast1 = sqrt(ll * ll + d * d) / v1 + sqrt((ll - x) * (ll - x) + (d - y) * (d - y)) / v2;
        double rast2 = sqrt(rr * rr + d * d) / v1 + sqrt((rr - x) * (rr - x) + (d - y) * (d - y)) / v2;

        if (rast1 < rast2)
            r = rr;
        else
            l = ll;
    }

    cout.precision(10);

    cout << fixed << l << '\n';

    return 0;
};
