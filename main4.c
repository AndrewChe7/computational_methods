//
// Created by GodKnows on 26.12.2021.
//
#include "interpolation_polynomial.h"
#include <stdio.h>

int main ()
{
    double x0 = 0.05;
    {
        double x[] = {-1, 0};
        double y[] = {19.1, 15.05};
        double a[] = {0, 0};
        find_polynomial(a, 2, x, y);
        printf("1 %lf\n", get_polynomial_value(a, x0, 2));
    }
    {
        double x[] = {-1, 0, 1};
        double y[] = {19.1, 15.05, 13.1};
        double a[] = {0, 0, 0};
        find_polynomial(a, 3, x, y);
        printf("2 %lf\n", get_polynomial_value(a, x0, 3));
    }
    {
        double x[] = {-1, 0, 1, 2};
        double y[] = {19.1, 15.05, 13.1, 14.39};
        double a[] = {0, 0, 0, 0};
        find_polynomial(a, 4, x, y);
        printf("3 %lf\n", get_polynomial_value(a, x0, 4));
    }
    {
        double x[] = {-1, 0, 1, 2, 3};
        double y[] = {19.1, 15.05, 13.1, 14.39, 15.57};
        double a[] = {0, 0, 0, 0, 0};
        find_polynomial(a, 5, x, y);
        printf("4 %lf\n", get_polynomial_value(a, x0, 5));
    }
    return 0;
}