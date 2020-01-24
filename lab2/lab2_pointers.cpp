#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Author: Mikhail Gunin, 9005" << endl;

    double x;
    cout << "Enter X: " << endl;
    cin >> x;

    double eps;
    cout << "Enter Epsilon: " << endl;
    cin >> eps;

    int MAX_COUNT = 0;

    double a = x;
    int i = 0;
    for (i = 0; i < 1000; i++)
    {
        double q = pow(x, 4)
                /
                   ((4 * i + 2) * (4 * i + 3) * (4 * i + 4) * (4 * i + 5));
        a *= q;

        if (fabs(a) < eps)
        {
            break;
        }
    }

    MAX_COUNT = i;

    double* sequence = new double[MAX_COUNT];
    double* sums     = new double[MAX_COUNT];

    *(sequence) = x;
    *(sums) = x;

    for (i = 0; i < MAX_COUNT; i++)
    {
        double q = pow(x, 4)
                /
                   ((4 * i + 2) * (4 * i + 3) * (4 * i + 4) * (4 * i + 5));

        auto a = *(sequence + i) * q;

        *(sequence + i + 1) = a;
        *(sums + i + 1) += *(sums + i) + a;
    }

    cout << "\nN = " << i - 1 << endl;

    for (int n = 0; n <= i; n++)
    {
        auto a = *(sequence + n);
        auto s = *(sums + n);

        printf("a[%d] = %lf; s = %lf\n", n, a, s);
    }

    delete[] sequence;
    delete[] sums;

    return 0;
}