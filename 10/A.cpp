#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    long long b, pos, n, k, su1, su2;
    String s, s1, r, str;
    vector<long long> op;
    //set <int, greater<int>> st;
    set<int> st;
    queue<int> q;
    const String al = "abcdefghijklmnopqrstuvwxyz";

    cin >> n;

    long long x, y;

    const double pi = 3.14159265358979323846;

    cout.precision(10);

    for (int i = 1; i <= n; i++) 
    {
        cin >> x >> y;
        
        if (atan2(y, x) < 0)
            cout << atan2(y, x) + 2 * pi << '\n';
        else
            cout << atan2(y, x) << '\n';
    }

    return 0;
};
