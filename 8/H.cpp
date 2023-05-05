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
    long long b, n, k, m, a, q, t;
    string s1, str, s;

    cin >> t;

    for (int temp = 1; temp <= t; temp++)
    {
        cin >> n;
        long long otv = 0;
        vector <long long> op;
        set <int> st;
        for (int i = 1; i <= n; i++)
        {
            cin >> k;
            op.push_back(k);
        }
        long long l = 0, r = 1;

        st.insert(op[0]);

        while (r < n)
        {
            if (st.count(op[r]) == 1)
            {
                st.erase(op[l]);
                l++;
            }
            else
            {
                st.insert(op[r]);
                r++;
            }
            otv = max(otv, r - l);
        }

        cout << otv << '\n';
    }

    return 0;
}
