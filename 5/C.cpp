#include <bits/stdc++.h>

using namespace std;
vector <long long> result;

const int max_n = 16000000;
int sv[max_n + 1];

void sieve()
{
    for (int i = 2; i*i <= max_n; ++i)
    {
        if (sv[i] > 0)
            continue;
        for (int j = 2; i * j <= max_n; ++j)
            sv[i * j] = 1;

    }
}

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m;
    string s, s1, str;
    vector <int> op;
    set <int> st;
    queue <int> q;

    cin >> n >> m;
    sieve();
    long long su = 0, col = 0, fl = 0;
    for (int i = 2; i <= 16000000; i++)
    {
        fl = 0;
        if (sv[i] == 0)
        {
            col++;
            fl = 1;
        }
        if (col >= n and col <=m and fl == 1)
        {
            su += i;
        }
        if (col == m)
        {
            cout << su;
            return 0;
        }
    }
}
