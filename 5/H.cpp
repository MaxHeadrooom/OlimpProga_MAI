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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou, m;
    string s, s1, str;
    vector <int> op;
    set <int> st;
    queue <int> q;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long x, y, x1, y1;
        cin >> x >> y >> x1 >> y1;
        cout << gcd(abs(x - x1), abs(y - y1)) + 1 << '\n';
    }
}
