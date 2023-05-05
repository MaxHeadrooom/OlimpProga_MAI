#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1);

int bin_pow(long long a, long long n, int mod)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        n /= 2;
    }
    return res;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    int d = gcd(b % a, a);
    return d;
}

struct vec2d 
{
    double x, y;

    vec2d(double _x, double _y) : x(_x), y(_y) {}

    vec2d() : x(0), y(0) {}

    friend vec2d operator+(vec2d a, vec2d b) {
        return vec2d(a.x + b.x, a.y + b.y);
    }

    friend vec2d operator-(vec2d a, vec2d b) {
        return vec2d(a.x - b.x, a.y - b.y);
    }

    friend vec2d operator*(vec2d a, double alph) {
        return vec2d(a.x * alph, a.y * alph);
    }

    friend ostream& operator << (ostream& out, const vec2d& v) {
        out << "(" << v.x << "," << v.y << ")";
        return out;
    }

    friend istream& operator >>(istream& in, vec2d& v) {
        in >> v.x >> v.y;
        return in;
    }

    //vec2d::dot(a,b);
    static double dot(vec2d a, vec2d b) {
        return a.x * b.x + a.y * b.y;
    }
    //vec2d::cross(a,b);
    static double cross(vec2d a, vec2d b) {
        return a.x * b.y - a.y * b.x;
    }

    // double l = a.len();
    double len() {
        return sqrt(dot(*this, *this));
    }

    //vec2d::angle(a,b);
    static double angle(vec2d a, vec2d b) {
        double phi = atan2(cross(a, b), dot(a, b));
        return (phi < 0 ? phi + 2 * PI : phi);
    }
};

const long long iter = 500;

double rast(double x0, double y0, double x1, double y1, double x2, double y2)
{
    vec2d ab(x2 - x1, y2 - y1), ap(x0 - x1, y0 - y1), bp(x2 - x0, y2 - y0);
    if ((vec2d::dot(ap, ab) > 0 and vec2d::dot(bp, ab) > 0)) 
        return abs((vec2d::cross(ab, ap)) / ab.len());
    else 
        return abs(min(ap.len(), bp.len()));
}

int main() 
{
    ios::sync_with_stdio(false);
    long long b, pos, n, k, su, m, t;
    set<int> st;
    queue<int> q;

    cin >> t;

    for (int a = 1; a <= t; a++)
    {
        int x0, y0, x1, y1, x2, y2, x3, y3;
        cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        vec2d op(x1 - x0, y1 - y0);

        double r = 1, l = 0;

        for (int i = 1; i <= iter; i++)
        {
            double ll = (2 * l + r) / 3, rr = (l + 2 * r) / 3;

            if (rast(x0 + op.x * ll, y0 + op.y * ll, x2, y2, x3, y3) < rast(x0 + op.x * rr, y0 + op.y * rr, x2, y2, x3, y3))
                r = rr;
            else
                l = ll;
        }
        cout.precision(10);

        cout << fixed << rast(x0 + op.x * l, y0 + op.y * l, x2, y2, x3, y3) << '\n';
    }

    return 0;
};
