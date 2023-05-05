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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, a, q, t;
    string s1, str, s;
    set <int> st;

    cin >> t;


    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        vector <int> op(n+1);
        for (int j = 0; j < n; j++)
            cin >> op[j];

        long long sum = op[0], l = 0, r = 0, temp = 0, pos = -1;
        for (int j = 0; j < n; j++) 
        {
            temp += op[j];

            if (temp > sum) 
            {
                sum = temp;
                l = pos + 1;
                r = j;
            }

            if (temp < 0) 
            {
                temp = 0;
                pos = j;
            }
        }
        cout << sum << " " << l + 1 << " " << r + 1 << '\n';
    }

    return 0;
}
