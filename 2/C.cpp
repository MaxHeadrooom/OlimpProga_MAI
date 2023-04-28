#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<int> z(1000);
    vector<int> m1(1000);
    string s1, s, x;
    long long n, su, y, t, col, m;
    cin >> n >> m;
    cin >> s;
    cin >> s1;
    col = 0;
    for (int i = 0; (i+m) <= n; i++)
    {
        x = s.substr(i, m);
        if (x == s1)
            col++;
    }
    cout << col;
    return 0;
} ;
