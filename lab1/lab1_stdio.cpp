#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    printf("Author: Mikhail Gunin \n");

    // x^2(x(3.03x + 4.00004) - 5.5)

    double x;
    printf("Enter X: \n");
    scanf("%lf", &x);

    printf("x^2(x(3.03x + 4.00004) - 5.5) \n");

    double part1_1 = 3.03 * x + 4.00004;
    printf("Part 1: %lf \n", part1_1);

    double part1_2 = x * part1_1 - 5.5;
    printf("Part 2: %lf \n", part1_2);

    double part1_3 = x * x * part1_2;
    printf("Part 3: %lf \n", part1_3);

    printf("First polinome result: %lf \n\n", part1_3);

    // x^3 (x^12 (-492.234x^2 + 434.432) + 0.2)

    printf("x^3 (x^12 (-492.234x^2 + 434.432) + 0.2) \n");
    double part2_1 = -492.234 * (x * x) + 434.432;
    printf("Part 1: %lf \n", part2_1);

    double part2_2 = pow(x, 12) * part2_1 + 0.2;
    printf("Part 2: %lf \n", part2_2);

    double part2_3 = pow(x, 3) * part2_2;
    printf("Part 3: %lf \n", part2_3);

    printf("Second polinome result: %lf \n\n", part2_3);

    double division = part1_3 / part2_3;

    printf("Final result: %0.8lf",  division);

    return 0;
}
