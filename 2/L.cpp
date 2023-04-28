#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long a, b, pos, su1;
    string s, s1;
    char x;
    vector <int> m(17, 0);
    su1 = 0;
    //ifstream file("1.txt");
    while (cin>>s)
    {
        pos = s.find('.');
        a = stoll(s.substr(0, s.find(".")));
        s1 = s.substr(s.find(".")+1, 15);
        reverse(s1.begin(), s1.end());
        for (int i = 0; i <= 14; i++)
        {
            x = s1[i];
            if (m[i] + int(x) - 48 >= 10)
            {
                m[i] = m[i] + int(x) - 58;
                m[i + 1] += 1;
            }
            else
                m[i] += int(x)-48;
        }
        su1 += a;
    }
    cout << su1 + m[15] << ".";
    for (int i = 0; i <= 14; i++)
    {
        cout << m[14-i];
    }
    //file.close();
};
