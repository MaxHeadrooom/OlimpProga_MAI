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

    vector <double> first;
    vector <double> second;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        first.push_back(k);
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        second.push_back(k);
    }
    setprecision(6);
    if (n == 1)
    {
        cout << fixed << second[0];
        exit(0);
    }

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    double su = 0;

    double su1 = 0;

    for (int i = 0; i < n; i++)
    {
        su1 += second[i];
    }

    for (int i = 0; i < n; i++)
    {
        su += ((first[i] * second[i]) / su1);
    }

    cout << fixed << su;
}
