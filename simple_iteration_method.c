//
// Created by GodKnows on 17.12.2021.
//

#include "simple_iteration_method.h"
#include <math.h>

int simple_iteration(func_t f, func_t phi, double x0, double* x_res, double eps)
{
    int iterations = 0;
    double x = x0;
    while (fabs(f(x)) > eps)
    {
        x = phi(x);
        iterations++;
        if (iterations > MAX_ITERATIONS)
        {
            return -1;
        }
    }
    *x_res = x;
    return iterations;
}