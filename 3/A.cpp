#include <bits/stdc++.h>

using namespace std;

bool cmp(int x, int y)
{
    return x < y;
};

struct point 
{
    int x;
    int y;
};

int main()
{
    ios::sync_with_stdio(false);
    long long a, b, pos, su1, n;
    string s, s1;
    char x;
    vector <int> m(100000);
    su1 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m[i];
    }
    sort(m.begin()+1, m.begin()+n+1, cmp);
    for (int i = 1; i <= n; i++)
    {
        cout << m[i] << " ";
    }
};
