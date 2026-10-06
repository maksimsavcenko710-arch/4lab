#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>

using namespace std;

int main()
{
    double x, y, R;
    srand((unsigned)time(NULL));

    cout << "R = ";
    cin >> R;

    for (int i = 0; i < 10; i++)
    {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        if (x >= -R && x <= R &&
            y >= -R && y <= R &&
            (pow(x + R, 2) + pow(y - R, 2) >= R * R) &&
            (pow(x - R, 2) + pow(y + R, 2) >= R * R))

            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl
         << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = -2. * R + 4. * R * rand() / RAND_MAX;
        y = -2. * R + 4. * R * rand() / RAND_MAX;
        if (x >= -R && x <= R &&
            y >= -R && y <= R &&
            (pow(x + R, 2) + pow(y - R, 2) >= R * R) &&
            (pow(x - R, 2) + pow(y + R, 2) >= R * R))

            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;
}