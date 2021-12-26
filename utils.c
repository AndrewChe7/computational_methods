//
// Created by GodKnows on 17.12.2021.
//

#include "utils.h"
#include <math.h>

double f(double x)
{
    return x*x*x + 4*x - 2;
}

double df(double x)
{
    return 3*x*x + 4;
}

double phi(double x)
{
    return -x*x*x / 4 + 0.5;
}

double int_f(double x)
{
    return x*x*x*x / 4 + 2*x*x - 2*x;
}

double cauchy_problem(double x, double y)
{
    return x + y + 2;
}

double answer(double x)
{
    return 5*exp(x-1) - x - 3;
}