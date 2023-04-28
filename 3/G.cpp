#include <bits/stdc++.h>

using namespace std;

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
    vector <int> m(3,0);
    su1 = 0;
    cin >> n;
    cin >> s;

    for (char i : s)
    {
        if (i == '(' or i == '{' or i == '[')
            s1.push_back(i);
        else
        {
            if (s1.size() == 0 and (i == ')' or i == '}' or i == ']'))
            {
                cout << "Nein";
                exit(0);
            }
            if (i == ')' and s1[s1.size() - 1] != '(')
            {
                cout << "Nein";
                exit(0);
            }
            else if (i == ')' and s1[s1.size() - 1] == '(')
            {
                s1.pop_back();
                continue;
            }

            if (i == '}' and s1[s1.size() - 1] != '{')
            {
                cout << "Nein";
                exit(0);
            }
            else if (i == '}' and s1[s1.size() - 1] == '{')
            {
                s1.pop_back();
                continue;
            }

            if (i == ']' and s1[s1.size() - 1] != '[')
            {
                cout << "Nein";
                exit(0);
            }
            else if (i == ']' and s1[s1.size() - 1] == '[')
            {
                s1.pop_back();
                continue;
            }
        }
    }
    if (s1.size() > 0)
        cout << "Nein";
    else
        cout << "Ja";
    return 0;
};
