//
// Created by GodKnows on 26.12.2021.
//

#include "runge_kutta_method.h"


int runge_kutta_method(cauchy_problem_t f, double a, double b, double y0, double* y, int n)
{
    int i;
    double k1, k2, k3, k4;
    double xi = a;
    double h = (b - a) / (n - 1);
    y[0] = y0;
    for (i = 0; i < n-1; i++)
    {
        k1 = f(xi, y[i]);
        k2 = f(xi + h / 2, y[i] + h * k1 / 2);
        k3 = f(xi + h / 2, y[i] + h * k2 / 2);
        k4 = f(xi + h, y[i] + h * k3);
        y[i + 1] = y[i] + h / 6 * (k1 + 2*k2 + 2*k3 + k4);
        xi += h;
    }
    return 0;
}