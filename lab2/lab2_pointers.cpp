#include <iostream>
#include <math.h>

using namespace std;

const int MAX_COUNT = 1000;

int main()
{
    cout << "Author: Mikhail Gunin, 9005" << endl;

    double x;
    cout << "Enter X: " << endl;
    cin >> x;

    double eps;
    cout << "Enter Epsilon: " << endl;
    cin >> eps;

    double* sequence = new double[MAX_COUNT];
    double* sums     = new double[MAX_COUNT];

    *(sequence) = x;
    *(sums) = x;

    printf("a[0] = %lf; s = %lf\n", x, x);

    for (int i = 0; i < MAX_COUNT; i++)
    {

        double q = pow(x, 4)
                /
                   ((4 * i + 2) * (4 * i + 3) * (4 * i + 4) * (4 * i + 5));

        auto a = *(sequence + i) * q;

        *(sequence + i + 1) = a;
        *(sums + i + 1) += *(sums + i) + a;

        if (fabs(a) <= eps)
        {
            cout << "\nN = " << i + 1 << endl;
            break;
        }
    }

    for (int i = 0; i < MAX_COUNT; i++)
    {
        auto a = *(sequence + i);
        auto s = *(sums + i);
        if (a == 0) break;

        printf("a[%d] = %lf; s = %lf\n", i, a, s);
    }


    return 0;
}