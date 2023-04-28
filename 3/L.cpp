#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, su1, n, k, su, x, dl, l, ri, a, c, d, t, m, j, i;
    string s, s1, r, str;
    vector <long long> op;
    cin >> x;
    
    for (i = 1; i <= x; i++)
    {
        cin >> n >> m;
        vector <long long> ar;
        for (j = 1; j <= n; j++)
        {
            cin >> k;
            ar.push_back(k);
        }
        su = 0;
        sort(ar.begin(), ar.end());
        for (j = 0; j < n; j++)
        {
            long long c = upper_bound(ar.begin()+j+1, ar.end(), m / ar[j]) - ar.begin();

            su += c - j - 1;
        }
        op.push_back(su);
    }

    for (int i = 0; i < x; i++)
        cout << op[i] << '\n';

    return 0;
};
