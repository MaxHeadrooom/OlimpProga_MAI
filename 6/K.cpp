#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    int d = gcd(b % a, a);
    return d;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, t, s, a1, b1, a2, b2, a3, b3, a4, b4;
    string s1, str;
    set <int> st;
    queue <int> q;

    cout.precision(7);

    cin >> n;

    cin >> a1 >> b1 >> a2 >> b2;

    double temp = sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));

    if (n == 1)
    {
        cout << fixed << temp;
        exit(0);
    }
    double pr_a = temp, pr_b = temp;

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
            cin >> a4 >> b4 >> a3 >> b3;
        else
            cin >> a3 >> b3 >> a4 >> b4;

        double t1, t2, t = pr_b;

        t1 = (pr_b + sqrt((a4 - a2) * (a4 - a2) + (b4 - b2) * (b4 - b2)) + sqrt((a4 - a3) * (a4 - a3) + (b4 - b3) * (b4 - b3)));
        t2 = (pr_a + sqrt((a4 - a1) * (a4 - a1) + (b4 - b1) * (b4 - b1)) + sqrt((a4 - a3) * (a4 - a3) + (b4 - b3) * (b4 - b3)));
        pr_b = min(t1, t2);

        double t3, t4;

        t3 = (pr_a + sqrt((a3 - a1) * (a3 - a1) + (b3 - b1) * (b3 - b1)) + sqrt((a4 - a3) * (a4 - a3) + (b4 - b3) * (b4 - b3)));
        t4 = (t + sqrt((a3 - a2) * (a3 - a2) + (b3 - b2) * (b3 - b2)) + sqrt((a4 - a3) * (a4 - a3) + (b4 - b3) * (b4 - b3)));
        pr_a = min(t3, t4);

        a1 = a3;
        b1 = b3;
        a2 = a4;
        b2 = b4;

        t = pr_a;
        pr_a = pr_b;
        pr_b = t;
    }

    cout << fixed << min(pr_a, pr_b);

    return 0;
}
