#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    cout << "Author: Mikhail Gunin\n";

    // x^2(x(3.03x + 4.00004) - 5.5)

    cout << "Enter X: ";

    double x;
    cin >> x;

    double first = x * x * ((x * (3.03 * x + 4.00004)) - 5.5);
    cout << "First: " << first << '\n';

    cout << "First polinome result: " << first << "\n\n";

    // x^3 (x^12 (–492.234x^2 + 434.432) + 0.2)

    double second = pow(x, 3) * ((pow(x, 12) * (-492.234 * (x * x) + 434.432)) - 5.5);
    cout << "Part 4: " << second << '\n';

    cout << "Second polinome result: " << second << "\n\n";

    double division = first / second;

    cout << "Final result: " << division;

    return 0;
}
