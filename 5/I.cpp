#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int b, pos, n, k, su1, su2, t, l, r, mid, cou, m;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    vector <int> sv(4e7+1);
    const int max_n = 4e7;

    for (int i = 2; i <= max_n; ++i)
    {
        if (sv[i] > 0)
            continue;
        for (int j = 2; i * j <= max_n; ++j)
            sv[i * j]++;
    }
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (k == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        if (sv[k] == 0)
            cout << "Prime" << '\n';
        else
            cout << sv[k] << '\n';

    }
}
