#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int b, pos, su1, n, k, su;
    string s, s1;
    char x;
    vector <int> a(1000000, 0);
    vector <int> m(1000000, 0);
    vector <int> ar;
    su1 = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> m[i];
        if (m[i] > n)
        {
            cout << -1;
            exit(0);
        }
        if (m[i] != 0)
            if (a[m[i]] == 0)
            {
                a[m[i]]++;
            }
            else
            {
                cout << -1;
                exit(0);
            }
    }
    pos = 1;
    for (int i = 1; i <= n; i++)
    {
        if (m[i] == 0)
        {
            for (int j = pos; j <= n; j++)
            {
                if (a[j] == 0)
                {
                    cout << j << " ";
                    pos = j+1;
                    break;
                }
            }
        }
        else
            cout << m[i] << " ";
    }
    return 0;
};
