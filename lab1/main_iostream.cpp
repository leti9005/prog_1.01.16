#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    cout << "Author: Mikhail Gunin, 9005" << endl;

    // x^2(x(3.03x + 4.00004) - 5.5)

    cout << "Enter X: ";

    double x;
    cin >> x;

    cout << "x^2(x(3.03x + 4.00004) - 5.5) \n";

    // part1_1 = (3.03x+ 4.00004)
    double part1_1 = 3.03 * x + 4.00004;
    cout << "Part 1: " << setw(16) << part1_1 << endl;

    // part1_2 = x * part1
    double part1_2 = x * part1_1;
    cout << "Part 2: " << setw(16) << part1_2 << endl;

    // part1_3 = part1_2 - 5.5
    double part1_3 = part1_2 - 5.5;
    cout << "Part 3: " << setw(16) << part1_3 << endl;

    // part1_4 = x^2 * part1_3
    double part1_4 = x * x * part1_3;
    cout << "Part 4: " << setw(16) << part1_4 << endl;

    cout << "First polynome result: " << part1_4 << "\n\n";

    // x^3 (x^12 (-492.234x^2 + 434.432) + 0.2)

    cout << "x^3 (x^12 (-492.234x^2 + 434.432) + 0.2) \n";
    // part2_1 = -492.234x^2 + 434.432
    double part2_1 = -492.234 * (x * x) + 434.432;
    cout << "Part 1: " << setw(16) << part2_1 << endl;

    // part2_2 = x^12 * part2_1
    double part2_2 = pow(x, 12) * part2_1;
    cout << "Part 2: " << setw(16) << part2_2 << endl;

    // part2_3 = part2_2 + 0.2
    double part2_3 = part2_2 - 5.5;
    cout << "Part 3: " << setw(16) << part2_3 << endl;

    // part2_4 = x^3 * part2_3
    double part2_4 = pow(x, 3) * part2_3;
    cout << "Part 4: " << setw(16) << part2_4 << endl;

    cout << "Second polynome result: " << part2_4 << "\n\n";

    double division = part1_4 / part2_4;

    cout << "Final result: " << setprecision(5) << division;

    return 0;
}
