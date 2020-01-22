#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x;
    cout << "Enter X: " << endl;
    cin >> x;

    double eps;
    cout << "Enter Epsilon: " << endl;
    cin >> eps;

    double a = x;
    double s = x;
    printf("a[0] = %lf\n", x);


    for (int i = 0; i <= 1000; i++)
    {
        double q = pow(x, 4)
                /
                   ((4 * i + 2) * (4 * i + 3) * (4 * i + 4) * (4 * i + 5));
        a *= q;
        s += a;

        printf("a[%d] = %lf; s = %lf\n", i + 1, a, s);

        if (a <= eps)
        {
            cout << "\nN = " << i + 1 << endl;
            break;
        }
    }

    return 0;
}