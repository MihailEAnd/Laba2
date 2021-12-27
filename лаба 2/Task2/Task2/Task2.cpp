#include <iostream>



double f(double x)
{
    double y;
    if (x <= 3)
        y = pow(x, 2) + 3 * x + 9;
    else
        y = sin(x) / (pow(x, 2) - 9);

    return y;
}

