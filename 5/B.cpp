#include <bits/stdc++.h>

using namespace std;
vector <long long> result;

int gcd(int x, int y)
{
    while (x != 0)
    {
        y %= x;
        swap(x, y);
    }
    return y;
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m, nok, x;
    string s, s1, str;
    vector <int> op;
    set <int> st;
    queue <int> q;

    cin >> n;
    cin >> x;
    nok = x;
    for (int i = 2; i <= n; i++)
    {
        cin >> b;
        nok = lcm(nok, b);
    }

    cout << nok;
}
