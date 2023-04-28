#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, su1, n, k, su, col, a, mod, m;
    string s, s1, r, str;
    stack <long long> sta;
    multiset<long long> st;

    cin >> n;
    cin >> a >> m >> k >> mod;

    vector<int> v(100333,0);
    for (int i = 0; i < n; ++i) 
    {
        v[a]++;
        a = (a * m + k) % mod;
    }
    col = 1;
    k = 0;
    for (int i = 0; i < 100333; i++)
    {
        for (int j = 1; j <= v[i]; j++)
        {
            k += ((i * col) % 1000000007);
            k %= 1000000007;
            col++;
        }
    }
    cout << k;
    return 0;
};
