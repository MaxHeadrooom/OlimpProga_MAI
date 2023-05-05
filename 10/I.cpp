#include <bits/stdc++.h>

using namespace std;

struct point
{
    long long x = 0, y = 0;
};

const long long iter = 5000;

bool cmp(point x, point y)
{
    return x.x < y.x;
}

bool operator<(point a, point b)
{
    if (a.x != b.x)
        return a.x < b.x;
    else
        return a.y < b.y;

}

int main()
{
    ios::sync_with_stdio(false);
    long long b, pos, n, k;

    set<point> st;

    queue<int> q;

    long long x, y, v1, v2, d;

    cin >> n;

    vector <point> op(n);

    for (int i = 0; i < n; i++)
    {
        cin >> op[i].x >> op[i].y;
        st.insert(op[i]);
    }

    point prov1, prov2, prov3, prov4;

    //sort(op.begin(), op.end(), cmp);

    unsigned long long ma = 0;

    point vec;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            unsigned long long S = (op[i].x - op[j].x) * (op[i].x - op[j].x) + (op[i].y - op[j].y) * (op[i].y - op[j].y);

            vec.x = (op[j].x - op[i].x);
            vec.y = (op[j].y - op[i].y);

            prov1.x = vec.y + op[i].x;
            prov1.y = -vec.x + op[i].y;

            prov2.x = vec.y + op[j].x;
            prov2.y = -vec.x + op[j].y;

            prov3.x = -vec.y + op[i].x;
            prov3.y = vec.x + op[i].y;

            prov4.x = -vec.y + op[j].x;
            prov4.y = vec.x + op[j].y;


            if (st.count(prov1) + st.count(prov2) >= 2)
            {
                if (S > ma)
                    ma = S;
            }

            if (st.count(prov3) + st.count(prov4) >= 2)
            {
                if (S > ma)
                    ma = S;
            }
        }
    }

    cout << ma;

    return 0;
};
