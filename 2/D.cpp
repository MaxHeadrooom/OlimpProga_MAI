#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<int> a;
    string s1, s;
    long long n, su, y, t, col, m, x, te;
    bool f;
    cin >> n;
    col = 1;
    for (int i = 1; i <= n; i++)
    {
        col = (col*i)%(1000000007);
    }
    cout << col;
    return 0;
} ;
