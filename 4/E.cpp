#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, su1, n, k, su, col, a;
    string s, s1, r, str;
    vector <long long> op;
    getline(cin, s1);
    //set <int, greater<int>> st;
    vector <long long> m;
    stack <long long> sta;

    for (char i : s1)
        if (isdigit(i))
            sta.push(i - '0');
        else
            if (i != ' ')
            {
                const long long a = sta.top();
                sta.pop();
                const long long b = sta.top();
                sta.pop();
                if (i == '+')
                    sta.push(a + b);
                else
                    if (i == '-')
                        sta.push(b - a);
                    else
                        sta.push(a * b);
            }
    cout << sta.top();
    return 0;
};
