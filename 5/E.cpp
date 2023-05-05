#include <bits/stdc++.h>

using namespace std;
vector <long long> result;

int gcd(long long a, long long b, long long & x, long long & y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long g = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m, a, c, x, y;
    string s, s1, str;
    vector <int> op;
    set <int> st;
    queue <int> q;
    cin >> s;
    s1 = "";
    if (s == "0")
    {
        cout << "YES";
        exit(0);
    }
    for (char i : s)
    {
        s1 = s1 + i;
        k = stoi(s1);
        if (k >= 97 or k == 0)
            if (k % 97 == 0 or k == 0)
                s1 = "";
            else
                s1 = to_string(k % 97);
    }
    if (s1.size() == 0)
        cout << "YES";
    else
        cout << "NO";
}
