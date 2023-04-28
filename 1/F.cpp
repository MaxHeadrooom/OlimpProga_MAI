#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long su, a, b ;
    cin >> a >> b;
    if (a < b)
        cout << (a+b)*(b-a+1)/2 << endl;
    else
        cout << (a+b)*(a-b+1)/2;
    return 0;
}
