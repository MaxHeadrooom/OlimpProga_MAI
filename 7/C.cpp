#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

int bin_pow(long long a, long long n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        n /= 2;
    }
    return res;
}

bool cmp(int x, int y)
{
    return x < y;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    cin >> n;

    long long col = 1;
    for (int i = 1; i <= n-1; i++)
    {
        if ( i != 2)
            col = (col * i) % mod;
    }
    cout << col;
}
