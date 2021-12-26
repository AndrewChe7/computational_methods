//
// Created by GodKnows on 26.12.2021.
//

#include "trap_method.h"


int trap_method(func_t f, double a, double b, int n, double* res)
{
    int i;
    double h = (b - a) / n;
    double x = a;
    double s = 0;
    for (i = 0; i < n; i++)
    {
        s += (f(x) + f(x+h)) / 2 * h;
        x+=h;
    }
    *res = s;
    return 0;
}