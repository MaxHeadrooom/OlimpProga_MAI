#include <bits/stdc++.h>

using namespace std;

int nod(int a, int b)
{
    int temp;
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    temp = b;
    while (temp % a != 0)
        temp += b;
    return temp;
}
struct point
{
    string s;
    int och;
    int shtr;
};

int main() 
{
    long long n, a, b, pos, su, su1, no, t, temp, time;
    cin >> n >> a >> b;
    string s, s1;
    char x;
    vector <point> m(100000);
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }

    time = a;
    no = nod(a, b);
    t = no / a + no / b;
    time += ((n - 1) / t) * no;

    n = (n - 1) % t;
    t = 0;
    temp = 0;
    while (n > 0)
    {
        t++;
        temp++;
        time++;
        if (t >= a)
        {
            n--;
            t = t % a;
        }
        if (temp >= b)
        {
            n--;
            temp = temp % b;
        }
    }
    cout << time << '\n';
}
