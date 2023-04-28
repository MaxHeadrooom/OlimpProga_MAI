#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, su1, n, k, su, col, a;
    string s, s1, r, str;
    deque <long long> m;
    stack <long long> sta;
    multiset<long long> st;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        st.insert(k);
    }

    for (int i = 1; i < n; i++)
    {
        a = *st.begin();
        st.erase(st.begin());
        b = *st.begin();
        st.erase(st.begin());
        st.insert(a + b);
        cout << a << " " << b << '\n';
    }

    return 0;
};
