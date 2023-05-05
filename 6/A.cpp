#include <bits/stdc++.h>

using namespace std;

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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k and i - j >= 0; j++)
        {
            op[i] = (op[i] + op[i - j]) % (1000000007);
        }
    }
    cout << op[n] % (1000000007);
}
