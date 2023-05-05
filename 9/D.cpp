#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    cin >> n >> k;

    vector <int> op(n + 1, 0);

    op[0] = 1;

    long long sum = 1;

    for (int i = 1; i <= n; i++)
    {
        op[i] = sum % mod;
        sum += op[i];
        if (i >= k)
            sum -= op[i - k];
    }

    cout << op[n] % (1000000007);
}
