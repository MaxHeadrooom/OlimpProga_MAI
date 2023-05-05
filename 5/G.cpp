#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m;
    string s, s1, str;
    set <int> st;
    queue <int> q;

    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (k == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        if (k == 0)
        {
            cout << 10 << '\n';
            continue;
        }
        vector <int> sv;
        while (k % 9 == 0)
        {
            k /= 9;
            sv.push_back(9);
        }
        while (k % 8 == 0)
        {
            k /= 8;
            sv.push_back(8);
        }
        while (k % 7 == 0)
        {
            k /= 7;
            sv.push_back(7);
        }
        while (k % 6 == 0)
        {
            k /= 6;
            sv.push_back(6);
        }
        while (k % 5 == 0)
        {
            k /= 5;
            sv.push_back(5);
        }
        while (k % 4 == 0)
        {
            k /= 4;
            sv.push_back(4);
        }
        while (k % 3 == 0)
        {
            k /= 3;
            sv.push_back(3);
        }
        while (k % 2 == 0)
        {
            k /= 2;
            sv.push_back(2);
        }
        if (sv.size() == 0 or k >= 10)
            cout << -1;
        else
        {
            reverse(sv.begin(), sv.end());
            for (int j = 0; j < sv.size(); j++)
                cout << sv[j];
        }
        cout << '\n';
    }
}
