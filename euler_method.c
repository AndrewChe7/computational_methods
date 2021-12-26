//
// Created by GodKnows on 26.12.2021.
//

#include "euler_method.h"
#include <math.h>

int euler_method(cauchy_problem_t f, double a, double b, double y0, double* y, int n)
{
    int i;
    double xi = a;
    double h = (b - a) / (n-1);
    y[0] = y0;
    for (i = 0; i < n-1; i++)
    {
        y[i+1] = y[i] + h * f(xi, y[i]);
        xi += h;
    }
    return 0;
}

double cauchy_problem_error(func_t ans, double a, double b, const double* y, int n)
{
    double res = 0;
    double h = (b - a) / (n - 1);
    double xi = a;
    for (int i = 0; i < n; i++)
    {
        double real_answer = ans(xi);
        res += (real_answer - y[i]) * (real_answer - y[i]);
        xi+=h;
    }
    return sqrt(res / n);
}
