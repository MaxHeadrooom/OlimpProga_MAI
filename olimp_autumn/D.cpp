#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long b, pos, n, k, t, m;
    queue<int> q;

    cin >> n;

    vector<long long> op(n*n);

    for (int i = 0; i < n*n; i++)
    {
        cin >> op[i];
    }

    sort(op.begin(), op.end());

    long long razn = op[1] - op[0], d=0;

    
    for (int i = 2; i <= n; i++)
    {
         if ((op[i] - op[0] != i * razn) and (i < n) or (i == n))
         {
             d = op[i] - op[0];
             break;
         }
    }

    cout << razn << " " << d << endl;

    return 0;
};
