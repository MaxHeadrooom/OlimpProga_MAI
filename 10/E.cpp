#include <bits/stdc++.h>

using namespace std;

struct point
{
    long long x = 0, y = 0, z = 0;
};

long long dot(point a, point b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

point operator -(point a, point b)
{
    return {a.x - b.x, a.y - b.y, a.z - b.z};
}

double length(point a)
{
    return sqrt(dot(a, a));
}
double distance(point a, point b)
{
    return length(a - b);
}

long long f(point a, point b)
{
    return a.x * b.y - a.y * b.x;
}
double distancetoline(point a, point b, point p)
{
    double temp = abs(f(b - a, p - a));
    double h = distance(a, b);
    return temp / h;
}

double distancetootr(point a, point b, point p)
{
    if (dot(b - a, p - a) < 0)
        return distance(p, a);
    if (dot(a - b, p - b) < 0)
        return distance(p, b);
    return distancetoline(a, b, p);
}

int main() {
    ios::sync_with_stdio(false);
    long long b, pos, n, k;
    //String s, s1, r, str;
    //set <int, greater<int>> st;
    set<int> st;
    queue<int> q;
    //const String al = "abcdefghijklmnopqrstuvwxyz";

    cin >> n;

    vector<point> op(n+1);

    long long x0, y0, x1, y1, x2, y2;

    const double pi = 3.14159265358979323846;

    cout.precision(9);

    point A, P, Q;

    for (int i = 0; i < n; i++) 
    {
        cin >> A.x >> A.y >> P.x >> P.y >> Q.x >> Q.y;
        cout << distancetootr(P, Q, A) << '\n';
    }

    return 0;
};
