#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    long long b, pos, n, k, su1, su2;
    vector<long long> op;
    set<int> st;
    queue<int> q;

    cin >> n;

    long long x0, y0, x1, y1, x2, y2;

    const double pi = 3.14159265358979323846;

    cout.precision(10);

    for (int i = 1; i <= n; i++) 
    {
        cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;

        double temp = (x1-x0)*(x2-x0) + (y1-y0)*(y2-y0);

        double dl1 = sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
        double dl2 = sqrt((x2 - x0) * (x2 - x0) + (y2 - y0) * (y2 - y0));

        double otv = temp / dl1;

        cout << acos(otv / dl2) << '\n';
        
    }

    return 0;
};
