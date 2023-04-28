#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long n, col_mi=0, col_ma=0, x, mii, maa, pos_mi=0, pos_ma=0;
    vector<int> m, mi, ma;
    cin >> n;
    mii = pow(10, 9) + 10;
    maa = -pow(10, 9) - 10;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < mii)
        {
            mii = x;
            pos_mi = i;
        }
        if (x > maa)
        {
            maa = x;
            pos_ma = i;
        }
        m.push_back(x);
    }
    if (m[0] > m[1])
    {
        col_ma += 1;
        ma.push_back(1);
    }
    if (m[0] < m[1])
    {
        col_mi += 1;
        mi.push_back(1);
    }

    for (int i = 1; i < n-1; i++)
    {
        if (m[i] > m[i+1] and m[i-1] < m[i])
        {
            col_ma += 1;
            ma.push_back(i+1);
        }
        if (m[i] < m[i + 1] and m[i - 1] > m[i])
        {
            col_mi += 1;
            mi.push_back(i+1);
        }
    }
    if (m[n-1] > m[n-2])
    {
        col_ma += 1;
        ma.push_back(n);
    }
    if (m[n-1] < m[n-2])
    {
        col_mi += 1;
        mi.push_back(n);
    }
    cout << col_mi << " ";
    for (int i = 1; i <= col_mi; i++)
    {
        cout << mi[i-1] << " ";
    }
    cout << '\n';
    cout << col_ma << " ";
    for (int i = 1; i <= col_ma; i++)
    {
        cout << ma[i-1] << " ";
    }
    cout << '\n';
    cout << pos_mi << " " << pos_ma;
};
