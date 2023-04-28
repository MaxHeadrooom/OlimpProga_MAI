#include <bits/stdc++.h>
using namespace std;

struct point
{
    string x;
    string y;
};

bool cmp(point x1, point y2)
{
    return x1.x < y2.y;
}

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, su1, n, k, su, col, fl, plu;
    string oper, log, pas;
    vector <string> op;
    map<string, string> ma;
    string logged;
    set <string> st;
    queue <int> q;

    logged = "";
    while (cin >> oper)
    {
        if (oper == "logout")
            cin >> log;
        else
            cin >> log >> pas;
        if (oper == "register")
        {
            if (ma.count(log) == 0)
            {
                ma[log] = pas;
                cout << "account created" << '\n';
            }
            else
                cout << "login already in use" << '\n';
        }
        if (oper == "login")
        {
            if (ma.count(log) == 0 or ma[log] != pas)
                cout << "wrong account info" << '\n';
            else
                if (st.count(log) != 0)
                    cout << "already logged in" << '\n';
                else
                {
                    cout << "logged in" << '\n';
                    st.insert(log);
                }
        }
        if (oper == "logout")
        {
            if (ma.count(log) == 0 or st.count(log) == 0)
                cout << "incorrect operation" << '\n';
            else
            {
                st.erase(st.find(log));
                cout << "logged out" << '\n';
            }
        }
    }

    return 0;
};
