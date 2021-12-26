//
// Created by GodKnows on 26.12.2021.
//

#include "simpson_method.h"

int simpson_method(func_t f, double a, double b, int n, double* res)
{
    int i;
    double h = (b - a) / n;
    double x = a;
    double s = 0;
    for (i = 0; i < n; i++)
    {
        s += h / 6 * (f(x) + 4 * f(x + h/2) + f(x + h));
        x+=h;
    }
    *res = s;
    return 0;
}