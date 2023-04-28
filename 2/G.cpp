#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<int> z(1000);
    vector<int> m1(1000);
    string s1, s;
    long long n, su, y, t, col, m, x;
    cin >> s;
    col = 0;
    for (int i: s)
    {
        if (i == '0' or i == '4' or i =='6' or i == '9')
            col++;
        if (i == '8')
            col +=2;
    }
    cout << col;
    return 0;
} ;
