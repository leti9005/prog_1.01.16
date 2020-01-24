#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int i;
    int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

    for (i = 0; i < 3; i++)
    {
        cout << a[i][2 - i] << ' ' << *a[i] << ' ' << *(*(a + i) + i) << endl;
    }
    
    return 0;
}
