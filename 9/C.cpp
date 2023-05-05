#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    cin >> n;

    vector <long long> op(n + 1);
    vector <long long> pred(n + 1);

    cin >> pred[0];

    for (int i = 2; i <= n; i++)
    {
        cin >> op[0];
        op[0] += pred[0];

        for (int j = 2; j <= i; j++)
        {
            cin >> op[j - 1];
            op[j - 1] += max(pred[j - 1], pred[j - 2]);
        }

        vector <long long> temp(n + 1);

        temp = pred;
        pred = op;
        op = temp;
    }

    long long ma = -1;

    for (int i = 0; i < n; i++)
    {
        if (pred[i] > ma)
            ma = pred[i];
    }

    cout << ma;

}
