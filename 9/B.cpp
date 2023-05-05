#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;
const long long inf = 1e18;

long long bin_pow(long long a, long long n)
{
    long long res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        n /= 2;
    }
    return res;
}

vector<vector<long long>> mem;
vector<long long> c;
vector <long long> r;

long long f(int i, int j)
{
    if (mem[i][j] < inf)
        return mem[i][j];
    
    long long otv = inf;

    for (int z = i; z <= j - 1; z++)
    {
        long long l = f(i, z);
        long long rig = f(z + 1, j);
        otv = min(otv, rig + l + r[i] * c[z] * c[j]);
    }
    mem[i][j] = otv;
    return mem[i][j];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, a, q;
    string s1, str, s;
    set <int> st;

    cin >> n;

    r.resize(n);
    c.resize(n);

    for (int i = 0; i < n; i++)
        cin >> r[i] >> c[i];

    mem.resize(n, vector<long long>(n, inf));
    
    for (int i = 0; i < n; i++)
        mem[i][i] = 0;

    long long res = f(0, n - 1);
    
    cout << res;

    return 0;
}
