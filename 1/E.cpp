#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x, y, n, a, b;
    int r;
    cin >> x >> y;

    r = x*60 + y;

    cin >> x >> y;
    cin >> a >> b;
    cin >> n;

    r += (x*60 + y)*(n);
    r += (a*60 + b)*(n-1);
    cout << trunc(r / 60) << " " <<r % 60 << endl;
    return 0;
}
