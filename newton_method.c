//
// Created by GodKnows on 17.12.2021.
//

#include "newton_method.h"
#include <math.h>

int newton(func_t f, func_t df, double x0, double* res, double eps)
{
    int iterations = 0;
    double x = x0;
    while (fabs(f(x)) > eps)
    {
        x = x - f(x) / df(x);
        iterations++;
        if (iterations > MAX_ITERATIONS)
        {
            return -1;
        }
    }
    *res = x;
    return iterations;
}