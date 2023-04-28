#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2, r1, r2, a, b;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    a = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    if (a > (r1+r2))
    {
        cout << "NO";
        return 0;
    }
    if ((a + min(r1,r2)) < max(r1,r2))
    {
        cout << "NO";
        return 0;
    }

    cout << "YES";
    return 0;
} ;
