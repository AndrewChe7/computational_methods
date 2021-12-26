//
// Created by GodKnows on 26.12.2021.
//

#include "euler_mod_method.h"

int euler_mod_method(cauchy_problem_t f, double a, double b, double y0, double* y, int n)
{
    int i;
    double xi = a;
    double y_;
    double h = (b - a) / (n-1);
    y[0] = y0;
    for (i = 0; i < n-1; i++)
    {
        y_ = y[i] + h * f(xi, y[i]);
        y[i+1] = y[i] + h * (f(xi, y[i]) + f(xi, y_)) / 2;
        xi += h;
    }
    return 0;
}