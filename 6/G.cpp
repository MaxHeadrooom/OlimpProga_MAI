#include <bits/stdc++.h>

using namespace std;

const int max_n = 2 * 1e6;
int op[max_n + 1];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    cin >> n;
    
    vector <int> op(n+1, 1e9);

    op[n] = 0;

    for (int i = n; i > 1; i--)
    {
        op[i - 1] = min(op[i - 1], op[i]+i);
        if (i % 2 == 0)
        {
            op[i/2] = min(op[i/2], op[i]+i);
        }
        if (i % 3 == 0)
        {
            op[i / 3] = min(op[i / 3], op[i]+i);
        }
    }

    cout << op[1];
}
