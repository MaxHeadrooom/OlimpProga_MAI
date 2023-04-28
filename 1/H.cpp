#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, d, x1, x2;
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);
    cout.precision(9);
    if (x1 == x2)
        cout <<fixed << min(x1, x2)<< endl;
    else
        cout <<fixed << min(x1, x2) << " " << max(x1, x2) << endl;
    return 0;
}
