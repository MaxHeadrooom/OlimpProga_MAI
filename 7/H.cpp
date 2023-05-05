#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long bin_pow(long long a, long long n)
{
    long long res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        n /= 2;
    }
    return res;
}

long long phi(long long n)
{
    long long res = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            res = res - res / i;
        }
    }
    if (n > 1)
    {
        res = res - res / n;
    }
    return res;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    int d = gcd(b % a, a);
    return d;
}

int raschet(long long a, long long m)
{
    if (a < 1 or m < 2)
    {
        cout << -1;
        exit(0);
    }
    long long per1 = m, temp1 = 0, per2 = a, temp2 = 1;

    while (per2 != 0)
    {
        long long q = per1 / per2;
        long long t1 = per1 - q * per2;
        long long t2 = temp1 - q * temp2;
        per1 = per2;
        temp1 = temp2;
        per2 = t1;
        temp2 = t2;
    }
    
    if (per1 == 1)
        return (temp1 + m) % m;
    else
        {
            cout << -1;
            exit(0);
        }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, t, a, x;
    string s1, str, s;
    set <int> st;

    cin >> a >> m;

    long long temp = phi(m);

    k = gcd(a, temp);

    if (a < 0)
    {
        while (a < 0)
        {
            a += m;
        }
    }

    //if (k != 1)
    {
        //cout << -1;
       // exit(0);
    }

    cout << raschet(a, m);
    return 0;
}
