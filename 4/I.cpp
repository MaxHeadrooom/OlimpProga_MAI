#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, n, k, su1, su2;
    string s, s1, r, str;
    vector <long long> op;
    //set <int, greater<int>> st;
    set <int> st;
    queue <int> q;
    const string al = "abcdefghijklmnopqrstuvwxyz";

    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> s >> s1;
    }

    cin >> s >> s1;
    su1 = 0;
    su2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        su1 += al.find(s[i])+1;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        su2 += al.find(s1[i])+1;
    }
    cout << su2 - su1;

    return 0;
};
