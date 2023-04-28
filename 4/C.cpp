#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, su1, n, k, su, col;
    string s, s1, r, str;
    vector <long long> op;
    cin >> n;
    //set <int, greater<int>> st;
    set <int> st;
    queue <int> q;

    for (long long i = 1; i <= n; i++)
    {
        cin >> k;
        op.push_back(k);
    }

    col = 0;

    sort(op.begin(), op.end());

    for (long long i = 0; i < n; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            for (long long a = j + 1; a < n; a++)
            {
                if ((op[i] + op[j]) > op[a])
                    col++;
            }
        }
    }

    cout << col;
    return 0;
};
