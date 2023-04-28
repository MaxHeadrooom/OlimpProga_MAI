#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x,y, n, temp;
    cin >> n;
    cin >> x >> y;

    temp = sqrt(x*x + y*y);
    if (n >= temp)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
