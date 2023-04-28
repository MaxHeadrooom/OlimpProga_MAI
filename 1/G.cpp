#include <iostream>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cout.precision(9);
    cout <<fixed << 0.5*abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1)) << endl;
    return 0;
}
