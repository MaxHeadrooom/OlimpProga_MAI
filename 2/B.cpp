#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<int> m(1000);
    vector<int> m1(1000);
    string s;
    long long n, x, su, y, t;
    cin>>n;
    su = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> m[i];
    }
    cin >> x >> y;
    m1 = m;
    while ((x != 0)  and (y != 0))
    {
        while (x < y)
        {
            t = m[x];
            m[x] = m[y];
            m[y] = t;
            x++;
            y--;
        }
        cin >> x >> y;
    }
    for (int i = 1; i <= n; i++)
        cout << m[i] << " ";
    return 0;
} ;
