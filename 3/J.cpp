#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int b, pos, su1, n, k, su, x, dl, l, ri;
    string s, s1, r, str;
    vector <int> a(1000000, 0);
    vector <int> m(1000000, 0);
    vector <int> ar;
    bool fl;
    su1 = 0;
    cin >> n;
    cin >> s;
    cin >> x;
    r = "";

    for (int i = 1; i <= x; i++)
    {
        cin >> dl;
        cin >> s1;
        l = 0;
        ri = 0;
        fl = true;
        while (l < dl and ri < n)
        {
            if (s1[l] == s[ri])
            {
                if (l + 1 == dl)
                    fl = false;
                ri++;
                l++;
            }
            else
            {
                if (ri + 1 == n)
                    fl = true;
                ri++;
                
            }

        }
        if (fl)
            r = r + '1';
        else
            r = r + '0';
    }
     
    cout << r;

    return 0;
};
