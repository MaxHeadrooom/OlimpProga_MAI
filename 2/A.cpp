#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<int> m;
    string s;
    long long n, x, su;
    cin>>n;
    su = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        su += x;
    }
    cout << su << '\n';
    return 0;
} ;
