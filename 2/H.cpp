#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<int> a(1000);
    string s1, s;
    long long n, su, y, t, col, m, x, te;
    bool f;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        for (int j = 1; j <= x; j++)
        {
            cin >> a[j];
        }
        f = false;
        col = 0;
        while (not f)
        {
            f = true;
            for (int j = 1; j < x; j++)
            {
                if (a[j] > (a[j + 1]))
                {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                    f = false;
                    col++;
                }
            }
        }
        cout << col << '\n';
    }
    return 0;
};
