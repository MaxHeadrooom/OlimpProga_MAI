#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, su1, n, k, su, col, a, max1, max2;
    string s, s1, r, str;
    deque <long long> m;
    stack <long long> sta;
    multiset<long long> st;

    max1 = 0;
    max2 = 0;
    const long long c = 1000000007;
    cin >> n >> k;
    a = k;
    for (long long i = 1; i <= n; i++)
    {
        a = (5 * a) % c;
        if (a > max1)
        {
            max2 = max1;
            max1 = a;
        }
        else
            if (a > max2)
                max2 = a;
    }
    cout << min(max1, max2) << " " << max(max1, max2);
    return 0;
};
