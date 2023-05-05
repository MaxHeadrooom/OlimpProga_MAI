#include <bits/stdc++.h>

using namespace std;

long long delitili(long long x)
{
    long long count, k;
    k = 0;
    count = 1;
    if (x == 1 or x == 2)
        return x;
    while ((x % 2) == 0)
    {
        k++;
        x /= 2;
    }
    if (x == 1)
        return k + 1;
    else
        count = k + 1;
    for (long long i = 3; i * i <= x; i += 2)
    {
        k = 0;
        while (x % i == 0)
        {
            k++;
            x /= i;
        }
        count *= (k + 1);
    }
    if (x > 1)
        count *= 2;
    return count;
}


int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, n, k, su1, su2, t, l, r, mid, cou;
    string s, s1, str;
    vector <long long> op;
    set <int> st;
    queue <int> q;


    cin >> n;
    cout << delitili(n);
    return 0;
}
  
