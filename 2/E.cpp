#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<int> z(1000);
    vector<int> m1(1000);
    string s1, s;
    long long n, su, y, t, col, m, x1, x2, i;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        exit(0);
    }
    x1 = 1;
    x2 = 1;
    if (n >= 1 and n <= 2)
    {
        cout << 1;
        exit(0);
    }
    i = 1;
    while (n > x1)
    {
        t = x2;
        x2 = x1 + x2;
        x1 = t;
        i++;
        if (n == x1)
        {
            cout << i;
            exit(0);
        }
    }
    cout << -1;
    return 0;
} ;
