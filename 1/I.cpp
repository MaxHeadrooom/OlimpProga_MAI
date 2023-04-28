
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, m, y;
        cin >> n >> m;
        cin >> x >> y;
        cout << int((n+x-1)/x) * int((m+y-1)/y);
    return 0;
} ;
