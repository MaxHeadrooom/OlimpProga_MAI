#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, su1, n, k, su, col, fl, plu;
    string s, s1, r, str;
    vector <string> op;
    cin >> n;
    //set <int, greater<int>> st;
    set <string> st, st2;
    queue <int> q;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        sort(s.begin(), s.end());
        op.push_back(s);
    }
    col = 0;
    plu = 0;
    for (int i = 0; i < n; i++)
    {
        st.insert(op[i]);
    }
    cout << st.size();
    return 0;
};
