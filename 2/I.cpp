#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long n, su, y, t, col, m, x, te;
    long long s1, s2, a, b, x1, x2, y1, y2, x3, x4, y3, y4, levo, pravo, niz, verh, a1, a2, b1, b2, a3, a4, b3, b4;
    cin >> a1 >> b1 >> a2 >> b2;
    x1 = min(a1, a2);
    y1 = min(b1, b2);
    x2 = max(a1, a2);
    y2 = max(b1, b2);
    s1 = abs(y2 - y1)*abs(x2-x1);
    cin >> a3 >> b3 >> a4 >> b4;
    x3 = min(a3, a4);
    y3 = min(b3, b4);
    x4 = max(a3, a4);
    y4 = max(b3, b4);
    s2 = abs(y4 - y3) * abs(x4 - x3);
    levo = max(x1, x3);
    verh = min(y2, y4);
    pravo = min(x2, x4);
    niz = max(y1, y3);

    a = pravo - levo;
    b = verh - niz;
    if (a < 0 or b < 0)
        cout << (s1+s2);
    else
        cout << (s1 + s2) - (a * b);
    return 0;
};
