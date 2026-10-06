#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    int i;
    double S;
    cout << "N = ";
    cin >> N;
    S = 0;
    i = 3;
    while (i <= N)
    {
        S += (cos(i / 2.0) + sin(2 * i)) / (1 + sin(cos(i * 1.0)));
        i++;
    }
    cout << S << endl;
    S = 0;
    i = 3;
    do
    {
        S += (cos(i / 2.0) + sin(2 * i)) / (1 + sin(cos(i * 1.0)));
        i++;
    } while (i <= N);
    cout << S << endl;
    S = 0;
    i = 3;
    for (i = 3; i <= N; i++)
    {
        S += (cos(i / 2.0) + sin(2 * i)) / (1 + sin(cos(i * 1.0)));
    }
    cout << S << endl;
    S = 0;
    for (i = N; i >= 3; i--)
    {
        S += (cos(i / 2.0) + sin(2 * i)) / (1 + sin(cos(i * 1.0)));
    }
    cout << S << endl;
    return 0;
}