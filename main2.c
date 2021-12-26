//
// Created by GodKnows on 17.12.2021.
//
#include "gauss_method.h"
#include "seidel_method.h"
#include <stdio.h>

int main (void)
{
    int res;
    {
        double a[] = {
                7, 2, -1, 1, -1,
                0, -6, 1, 1, -2,
                -3, 1, 8, 1, 1,
                2, 2, -3, 9, 0,
                1, -2, -3, 1, -9
        };
        double b[] = {
                57, 13, -4, 21, 33
        };
        double x[] = {
                0, 0, 0, 0, 0
        };
        res = gauss_method(a, b, x, 5);
        if (res < 0)
        {
            printf("Something is wrong.\n");
        } else {
            printf("X: %lf %lf %lf %lf %lf\n", x[0], x[1], x[2], x[3], x[4]);
        }
    }
    {
        double a[] = {
                7, 2, -1, 1, -1,
                0, -6, 1, 1, -2,
                -3, 1, 8, 1, 1,
                2, 2, -3, 9, 0,
                1, -2, -3, 1, -9
        };
        double b[] = {
                57, 13, -4, 21, 33
        };
        double x[] = {
                0, 0, 0, 0, 0
        };
        res = seidel_method(a, b, x, 5, 0.001);
        if (res < 0)
        {
            printf("Something is wrong.\n");
        } else {
            printf("X: %lf %lf %lf %lf %lf\n", x[0], x[1], x[2], x[3], x[4]);
        }
    }

}