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

    cin >> s;
    cin >> s1;

    vector<vector<long long>> op(s.size()+1, vector<long long>(s1.size()+1));

    for (int i = 1; i <= s.size(); i++)
    {
        for (int j = 1; j <= s1.size(); j++)
        {
            if (s[i-1] == s1[j-1])
                op[i][j] = op[i - 1][j - 1] + 1;
            else
                op[i][j] = max(op[i - 1][j], op[i][j - 1]);
        }
    }

    cout << op[s.size()][s1.size()];

}
