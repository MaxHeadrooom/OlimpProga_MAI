#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s1, s;
    long long n, su, y, t, col, m, x, te;
    bool f;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {   
        vector<int> a(6, 0);
        cin >> x;
        while (x >= 5000)
        {
            if (x >= 5000)
            {
                x -= 5000;
                a[5] += 1;
            }
        }
        while (x >= 1000)
        {
            if (x >= 1000)
            {
                x -= 1000;
                a[4] += 1;
            }
        }
        while (x >= 500)
        {
            if (x >= 500)
            {
                x -= 500;
                a[3] += 1;
            }
        }
        while (x >= 200)
        {
            if (x >= 200)
            {
                x -= 200;
                a[2] += 1;
            }
        }
        while (x >= 100)
        {
            if (x >= 100)
            {
                x -= 100;
                a[1] += 1;
            }
        }
        cout << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << '\n';
    }
    return 0;
};
