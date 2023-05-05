#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    cin >> n >> m;

    vector<vector<long long>> op(n + 3, vector<long long>(m + 3, -2)); 

    for (int i = 2; i <= n+1; i++)
    {
        for (int j = 2; j <= m+1; j++)
        {
            cin >> op[i][j];
        }
    }

    long long i = 2, j = 2, pr = 0, pred_i = 2, pred_j = 2;

    while(pr < (n+m-1))
    {
        pr++;
        i = pred_i; 
        j = pred_j;
        while(i >= 2 and j <= m+1)
        {
            if (i == 2 and j == 2)
            {
                break;
            }
            long long temp = max(max(max(op[i - 2][j + 1], op[i - 2][j - 1]), op[i - 1][j - 2]), op[i + 1][j - 2]);
            if (temp == -2)
                op[i][j] = -2;
            else
                op[i][j] = temp + op[i][j];
            i--;
            j++;
        }
        if (pred_i == n+1)
        {
            pred_j++;
        }
        else
        {
            pred_i++;
            pred_j = 2;
        }
    }

    long long ma = -1;

    for (int i = 2; i <= n+1; i++)
    {
        for (int j = 2; j <= m+1; j++)
        {
            if (op[i][j] > ma)
                ma = op[i][j];
        }
    }

    cout << ma;

}
