#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, y, xp, xk, dx, R;
    const double PI = 4.0 * atan(1.0);

    cout << "R = ";
    cin >> R;
    cout << "xp = ";
    cin >> xp;
    cout << "xk = ";
    cin >> xk;
    cout << "dx = ";
    cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk + dx / 2.0)
    {
        if (x <= -7.0 - R)
            y = R;
        else if (x <= -7.0 + R ) // Дуга строго до -7 + R
            y = R - sqrt(max(0.0, R * R - (x + 7.0) * (x + 7.0)));
        else if (x <= -4.0)     // Пряма від -7 + R до -4
            y = R;
        else if (x <= 0.0)      // Похила від -4 до 0
            y = -R * x / 4.0;
        else if (x <= PI)       // Синусоїда від 0 до PI
            y = sin(x);
        else                    // Пряма під кутом 45 градусів
            y = x - PI;

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << y
             << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}