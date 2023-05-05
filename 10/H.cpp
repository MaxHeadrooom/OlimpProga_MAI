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

int main() {
    ios::sync_with_stdio(false);
    long long b, pos, n, k;
    //String s, s1, r, str;
    //set <int, greater<int>> st;
    set<int> st;
    queue<int> q;
    //const String al = "abcdefghijklmnopqrstuvwxyz";

    cin >> n;

    long long x0, y0, x1, y1, x2, y2;

    const double pi = 3.14159265358979323846;

    cout.precision(9);

    point pred, now;

    double s = 0;

    vector <point> op(n);

    for (int i = 0; i < n; i++)
    {
        cin >> op[i].x >> op[i].y;
        op[i].ugl = atan2(op[i].y, op[i].x);
    }

    sort(op.begin(), op.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        now.x = op[i].x;
        now.y = op[i].y;

        now.x = now.x + pred.x;
        now.y = now.y + pred.y;

        double temp, t;
        t = abs(now.x - pred.x);
        temp = (now.y + pred.y) / 2.0;

        s += t * temp;
        pred.x = now.x;
        pred.y = now.y;
    }

    long long per = s*2;

    cout << per;

    return 0;
};
