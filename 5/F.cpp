#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long pred, n, k;
    unsigned long long rast;
    string s, s1, str;
    vector <long long> op;
    set <int> st;
    queue <int> q;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        op.push_back(k);
    }

    sort(op.begin(), op.end());

    rast = 0;
    pred = op[0];

    for (int i = 1; i < n; i++)
    {
        rast += i * (op[i]) - pred;
        pred += op[i];
    }
    cout << rast;
}
