#include <bits/stdc++.h>

using namespace std;

const long double PI = acos(-1);

struct point
{
    long long x = 0, y = 0, z = 0;
};

struct point1
{
    long double x = 0, y = 0, z = 0;
};

long long dot(point a, point b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

point operator -(point a, point b)
{
    return { a.x - b.x, a.y - b.y, a.z - b.z };
}

long double length(point a)
{
    return sqrt(dot(a, a));
}
long double distance(point a, point b)
{
    return length(a - b);
}

long long f(point a, point b)
{
    return a.x * b.y - a.y * b.x;
}
long double distancetoline(point a, point b, point p)
{
    long double temp = abs(f(b - a, p - a));
    long double h = distance(a, b);
    return temp / h;
}

long double distancetootr(point a, point b, point p)
{
    if (dot(b - a, p - a) < 0)
        return distance(p, a);
    if (dot(a - b, p - b) < 0)
        return distance(p, b);
    return distancetoline(a, b, p);
}

const long long iter = 10000;

int main()
{
    ios::sync_with_stdio(false);
    long long b, n, su, m, t;
    //String s, s1, r, str;
    //set <int, greater<int>> st;
    set<int> st;
    queue<int> q;

    long long x, y, v1, v2, d;

    point1 dom, ugl1, ugl2, ugl3;

    cin >> dom.x >> dom.y;

    cin >> ugl1.x >> ugl1.y;
    cin >> ugl2.x >> ugl2.y;
    cin >> ugl3.x >> ugl3.y;

    cin >> n;

    point1 A, P, Q, A1;
    point1 pos1, pos2, pos3;

    long double rast1 = 0, rast2 = 0, rast3 = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;

        long double r = max(ugl1.x, ugl2.x), l = min(ugl1.x, ugl2.x);

        P.x = ugl1.x;
        P.y = ugl1.y;
        Q.x = ugl2.x;
        Q.y = ugl2.y;
        //если паралельно OX или OY
        if (ugl1.x == ugl2.x or ugl1.y == ugl2.y)
        {
            if (ugl1.x == ugl2.x)
            {
                pos1.x = abs(dom.x + x) / 2.0;
                pos1.y = ugl1.y;
                rast1 = sqrt((dom.x - pos1.x) * (dom.x - pos1.x) + (dom.y - pos1.y) * (dom.y - pos1.y)) + sqrt((x - pos1.x) * (x - pos1.x) + (y - pos1.y) * (y - pos1.y));
            }
            if (ugl1.y == ugl2.y)
            {
                pos1.x = ugl1.x;
                pos1.y = abs(dom.y + y) / 2.0;
                rast1 = sqrt((dom.x - pos1.x) * (dom.x - pos1.x) + (dom.y - pos1.y) * (dom.y - pos1.y)) + sqrt((x - pos1.x) * (x - pos1.x) + (y - pos1.y) * (y - pos1.y));
            }
        }//не паралельно(общий случай)
        else
        {
            long double k = (ugl2.y - ugl1.y) / (ugl2.x - ugl1.x);
            long double b = (ugl2.x * ugl1.y - ugl1.x * ugl2.y) / (ugl2.x - ugl1.x);

            long double ra = 0, ras = 0, ll, rr;

            for (int i = 1; i <= iter; i++)
            {
                ll = (2 * l + r) / 3, rr = (l + 2 * r) / 3;
                //расчет координат двух точек
                A.x = ll;
                A1.x = rr;
                A.y = k * A.x + b;
                A1.y = k * A1.x + b;
                //сумма растояний до 1 точки
                ra = sqrt((dom.x - A.x) * (dom.x - A.x) + (dom.y - A.y) * (dom.y - A.y)) + sqrt((x - A.x) * (x - A.x) + (y - A.y) * (y - A.y));
                //до 2
                ras = sqrt((dom.x - A1.x) * (dom.x - A1.x) + (dom.y - A1.y) * (dom.y - A1.y)) + sqrt((x - A1.x) * (x - A1.x) + (y - A1.y) * (y - A1.y));

                if (ra < ras)
                    r = rr;
                else
                    l = ll;
            }
            pos1.x = ll;
            pos1.y = k * ll + b;
            rast1 = sqrt((dom.x - pos1.x) * (dom.x - pos1.x) + (dom.y - pos1.y) * (dom.y - pos1.y)) + sqrt((x - pos1.x) * (x - pos1.x) + (y - pos1.y) * (y - pos1.y));
        }

        //расчет расстояния до 2 прямой(тоже самое, только для других 2 точек)

        r = max(ugl1.x, ugl3.x), l = min(ugl1.x, ugl3.x);

        P.x = ugl1.x;
        P.y = ugl1.y;
        Q.x = ugl3.x;
        Q.y = ugl3.y;
        //если паралельно OX или OY
        if (ugl1.x == ugl3.x or ugl1.y == ugl3.y)
        {
            if (ugl1.x == ugl3.x)
            {
                pos2.x = abs(dom.x + x) / 2.0;
                pos2.y = ugl1.y;
                rast2 = sqrt((dom.x - pos2.x) * (dom.x - pos2.x) + (dom.y - pos2.y) * (dom.y - pos2.y)) + sqrt((x - pos2.x) * (x - pos2.x) + (y - pos2.y) * (y - pos2.y));
            }
            if (ugl1.y == ugl3.y)
            {
                pos2.x = ugl1.x;
                pos2.y = abs(dom.y + y) / 2.0;
                rast2 = sqrt((dom.x - pos2.x) * (dom.x - pos2.x) + (dom.y - pos2.y) * (dom.y - pos2.y)) + sqrt((x - pos2.x) * (x - pos2.x) + (y - pos2.y) * (y - pos2.y));
            }
        }//не паралельно(общий случай)
        else
        {
            long double k = (ugl3.y - ugl1.y) / (ugl3.x - ugl1.x);
            long double b = (ugl3.x * ugl1.y - ugl1.x * ugl3.y) / (ugl3.x - ugl1.x);

            long double ra = 0, ras = 0, ll, rr;

            for (int i = 1; i <= iter; i++)
            {
                ll = (2 * l + r) / 3, rr = (l + 2 * r) / 3;
                //расчет координат двух точек
                A.x = ll;
                A1.x = rr;
                A.y = k * A.x + b;
                A1.y = k * A1.x + b;
                //сумма растояний до 1 точки
                ra = sqrt((dom.x - A.x) * (dom.x - A.x) + (dom.y - A.y) * (dom.y - A.y)) + sqrt((x - A.x) * (x - A.x) + (y - A.y) * (y - A.y));
                //до 2
                ras = sqrt((dom.x - A1.x) * (dom.x - A1.x) + (dom.y - A1.y) * (dom.y - A1.y)) + sqrt((x - A1.x) * (x - A1.x) + (y - A1.y) * (y - A1.y));

                if (ra < ras)
                    r = rr;
                else
                    l = ll;
            }
            pos2.x = ll;
            pos2.y = k * ll + b;
            rast2 = sqrt((dom.x - pos2.x) * (dom.x - pos2.x) + (dom.y - pos2.y) * (dom.y - pos2.y)) + sqrt((x - pos2.x) * (x - pos2.x) + (y - pos2.y) * (y - pos2.y));
        }

        //расчет всего того же самого для 3 стороны

        r = max(ugl2.x, ugl3.x), l = min(ugl2.x, ugl3.x);

        P.x = ugl2.x;
        P.y = ugl2.y;
        Q.x = ugl3.x;
        Q.y = ugl3.y;
        //если паралельно OX или OY
        if (ugl2.x == ugl3.x or ugl2.y == ugl3.y)
        {
            if (ugl2.x == ugl3.x)
            {
                pos3.x = abs(dom.x + x) / 2.0;
                pos3.y = ugl2.y;
                rast3 = sqrt((dom.x - pos3.x) * (dom.x - pos3.x) + (dom.y - pos3.y) * (dom.y - pos3.y)) + sqrt((x - pos3.x) * (x - pos3.x) + (y - pos3.y) * (y - pos3.y));
            }
            if (ugl2.y == ugl3.y)
            {
                pos3.x = ugl2.x;
                pos3.y = abs(dom.y + y) / 2.0;
                rast3 = sqrt((dom.x - pos3.x) * (dom.x - pos3.x) + (dom.y - pos3.y) * (dom.y - pos3.y)) + sqrt((x - pos3.x) * (x - pos3.x) + (y - pos3.y) * (y - pos3.y));
            }
        }//не паралельно(общий случай)
        else
        {
            long double k = (ugl3.y - ugl2.y) / (ugl3.x - ugl2.x);
            long double b = (ugl3.x * ugl2.y - ugl2.x * ugl3.y) / (ugl3.x - ugl2.x);

            long double ra = 0, ras = 0, ll, rr;

            for (int i = 1; i <= iter; i++)
            {
                ll = (2 * l + r) / 3, rr = (l + 2 * r) / 3;
                //расчет координат двух точек
                A.x = ll;
                A1.x = rr;
                A.y = k * A.x + b;
                A1.y = k * A1.x + b;
                //сумма растояний до 1 точки
                ra = sqrt((dom.x - A.x) * (dom.x - A.x) + (dom.y - A.y) * (dom.y - A.y)) + sqrt((x - A.x) * (x - A.x) + (y - A.y) * (y - A.y));
                //до 2
                ras = sqrt((dom.x - A1.x) * (dom.x - A1.x) + (dom.y - A1.y) * (dom.y - A1.y)) + sqrt((x - A1.x) * (x - A1.x) + (y - A1.y) * (y - A1.y));

                if (ra < ras)
                    r = rr;
                else
                    l = ll;
            }
            pos3.x = ll;
            pos3.y = k * ll + b;
            rast3 = sqrt((dom.x - pos3.x) * (dom.x - pos3.x) + (dom.y - pos3.y) * (dom.y - pos3.y)) + sqrt((x - pos3.x) * (x - pos3.x) + (y - pos3.y) * (y - pos3.y));
        }

        cout.precision(16);

        if (rast3 <= rast2 and rast3 <= rast1)
        {
            cout << fixed << pos3.x << " " << pos3.y << '\n';
            continue;
        }
        if (rast2 <= rast3 and rast2 <= rast1)
        {
            cout << fixed << pos2.x << " " << pos2.y << '\n';
            continue;
        }
        cout << fixed << pos1.x << " " << pos1.y << '\n';
    }

    return 0;
};
