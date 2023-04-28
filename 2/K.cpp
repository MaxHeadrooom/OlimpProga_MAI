#include <bits/stdc++.h>

using namespace std;

long long po(long long n, long long i)
{
    long long a;
    a = 1;
    if (i == 0)
        return 1;
    else
        for (int j = 1; j <= i; j++)
            a *= n;
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    long long n, m, x, t;
    string s, ch, s1;
    vector <int> ar;

    cin >> n >> m;

    ch = "0123456789abcdefghijklmnopqrstuvwxyz";

    cin >> s;
    x = 0;
    if (n == 10)
        x = stoll(s);
    else
    {
        reverse(s.begin(), s.end());
        for (int i = 0; i < size(s); i++)
        {
            x += (ch.find(s[i]))*po(n, i);
        }
    }

    s1 = "";
    while (x >= m)
    {
        t = x % m;
        s1 = s1 + ch[t];
        x /= m;
    }
    t = x % m;
    s1 = s1 + ch[t];
    reverse(s1.begin(), s1.end());
    cout << s1;
};
