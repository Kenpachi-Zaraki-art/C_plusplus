#include <cmath>
#include <iostream>
using namespace std;

int main()
{
double x, y;
    cout << "Input (x, y): ";
    cin >> x >> y;

    if (((x >= -1 && x <= 0 && y >= -1 && y <= 0 && sqrt(x * x + y * y) <= 1) ||
         (x >= 0 && x <= 1 && y >= 0 && y <= 1 && y <= 1 - x))) {
        cout << "Point (" << x << ", " << y << ") yes in place.\n";
    } else {
        cout << "Point (" << x << ", " << y << ") no in place.\n";
    }
}