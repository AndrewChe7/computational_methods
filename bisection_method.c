//
// Created by GodKnows on 17.12.2021.
//

#include "bisection_method.h"
#include <math.h>

int has_equal_signs(double a, double b)
{
    if (a * b > DBL_EPSILON)
    {
        return 1;
    } else {
        return 0;
    }
}

int bisection(func_t f, double xl, double xr, double* x_res, double eps)
{
    int iterations = 0;
    double xm;

    if (has_equal_signs(f(xl), f(xr)))
    {
        return -1;
    }

    xm = (xl + xr) / 2;
    while (eps < fabs(f(xm)))
    {
        if (has_equal_signs(f(xl), f(xm)))
        {
            xl = xm;
        } else {
            xr = xm;
        }
        xm = (xl + xr) / 2;
        iterations++;
        if (iterations > MAX_ITERATIONS)
        {
            return -2;
        }
    }
    *x_res = xm;
    return iterations;
}