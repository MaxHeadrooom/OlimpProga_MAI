#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, su1, n, k, su, col, a, med;
    string s, s1, r, str;
    stack <long long> sta;
    vector <long long> m;
    multiset<long long> lst;
    multiset<long long> rst;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        m.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0 or i == 1)
        {
            med = m[i];
            rst.insert(med);
            med = *rst.begin();
            cout << med << '\n';
            continue;
        }
        if (m[i] >= med)
        {
            rst.insert(m[i]);
            if (rst.size() - lst.size() > 2)
            {
                k = *rst.begin();
                rst.erase(rst.begin());
                lst.insert(k);
            }
        }
        if (m[i] < med)
        {
            lst.insert(m[i]);
            a = lst.size();
            b = rst.size();
            if (a-b >= 0)
            {
                k = *lst.rbegin();
                lst.erase(--(lst.end()));
                rst.insert(k);
            }
        }
        med = *rst.begin();
        cout << med << '\n';
    }
    return 0;
};
