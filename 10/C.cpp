#include <bits/stdc++.h>

using namespace std;

struct point
{
    long long x, y;
};

int main() {
    std::ios::sync_with_stdio(false);
    long long b, pos, n, k;
    set<int> st;
    queue<int> q;

    cin >> n;

    vector<point> op(n+1);

    long long x0, y0, x1, y1, x2, y2;

    const double pi = 3.14159265358979323846;

    cout.precision(10);

    for (int i = 0; i < n; i++) 
    {
        cin >> op[i].x >> op[i].y;
    }

    long long su1 = 0, su2 = 0;

    for (int i = 1; i < n; i++)
    {
        su1 += op[i].x * op[i - 1].y;
        su2 += op[i].y * op[i - 1].x;
    }

    su1 += op[0].x * op[n - 1].y;
    su2 += op[0].y * op[n - 1].x;

    double s = (su1 - su2) / 2.0;

    cout << abs(s);

    return 0;
};
