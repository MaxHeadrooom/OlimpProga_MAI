#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int b, pos, su1, n, k, su, x, dl, l, ri, a, c, d, t;
    string s, s1, r, str;
    vector <int> m;
    vector <int> op(2000000, 0);
    vector <int> ar;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        m.push_back(x);
    }

    sort(m.begin(), m.end());
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        cin >> c >> d;
        a = min(c, d);
        b = max(c, d);
        auto k = lower_bound(m.begin(), m.end(), a);
        auto t = lower_bound(m.begin(), m.end(), b);
        ar.push_back(t-k);
    }

    for (int i = 0; i < x; i++)
    {
        cout << ar[i] << '\n';
    }

    return 0;
};
