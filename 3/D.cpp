#include <bits/stdc++.h>

using namespace std;

int main() {
    char s;
    long long l = -1, r = 1000000000;
    while (l != r)
    {
        int mid = (l + r + 1) / 2;
        cout.flush() << mid << endl;

        cin >> s;

        if (s == '>')
            r = mid - 1;
        if (s == '<')
            l = mid;
        if (s == '=')
            exit(0);
    }
}
