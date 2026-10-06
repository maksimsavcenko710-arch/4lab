#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, A, B, y;
    cout << "xp = ";
    cin >> xp;
    cout << "xk = ";
    cin >> xk;
    cout << "dx = ";
    cin >> dx;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
         << setw(7) << "y" << "    |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        A = x * x * sin(4.0 * x / 3.0);
        if (x < -5)
            B = cos(x) / sin(x);
        else if (x >= -5 && x < 0) 
            B = 4 - (x * x) / 2.0;
        else
            B = log10(pow(x, 2)) - 4.0 * x / 3.0;
        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << y
             << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}