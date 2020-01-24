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

    double sequence[MAX_COUNT] = { x };
    double sums[MAX_COUNT]     = { x };

    int i;
    for (i = 0; i < MAX_COUNT; i++)
    {
        double q = pow(x, 4)
                /
                   ((4 * i + 2) * (4 * i + 3) * (4 * i + 4) * (4 * i + 5));

        sequence[i + 1] = sequence[i] * q;
        sums[i + 1] += sums[i] + sequence[i + 1];

        if (fabs(sequence[i + 1]) < eps)
        {
            cout << "\nN = " << i - 1 << endl;
            break;
        }
    }

    for (int n = 0; n < i; n++)
    {
        auto a = sequence[n];
        auto s = sums[n];

        printf("a[%d] = %lf; s = %lf\n", n, a, s);
    }


    return 0;
}