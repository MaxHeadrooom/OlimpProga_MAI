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
    
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        op.push_back(k);
    }

    col = 0;
    sort(op.begin(), op.end());

    for (int i = 1; i < n; i++)
    {
        if (op[i]-1 != (op[i-1]))
        {
            cout << "Scammed";
            exit(0);
        }
    }
    cout << "Deck looks good";
    return 0;
};
