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

struct point 
{
	long long l, r; 
};

struct point1 
{
	long long pos, type;
};

bool operator<(point1 x, point1 y)
{
	if (x.pos != y.pos)
		return x.pos < y.pos;
	return x.type > y.type;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long b, pos, n, k, m, a, q, t;
    string s1, str, s;
    set <int> st;

    cin >> n;

	vector<point> op(n+1);

	for (int i = 1; i <= n; i++)
		cin >> op[i].l >> op[i].r;

	vector<point1> op1;

	long long sum = 0, cur = 0;

	for (int i = 1; i <= n; i++)
	{
		op1.push_back(point1{op[i].l, 1});
		op1.push_back(point1{op[i].r, -1});
	}
	
	sort(op1.begin(), op1.end());

	for (int i = 0; i < 2 * n; i++)
	{
		if (cur != 0)
		{
			sum += op1[i].pos - op1[i - 1].pos;
			cur += op1[i].type;
			continue;
		}
		sum++;
		cur += op1[i].type;
	}
	cout << sum;

    return 0;
}
