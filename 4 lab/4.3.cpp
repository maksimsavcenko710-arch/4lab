#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, a, b, c, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(10) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {   
        if (a < 0 && c != 0)
            F = a * x * x + b * x + c;
        else if (a > 0 && c == 0)
            F = -a / (x - b);
        else
            F = a * (x + c);

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << F
             << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}