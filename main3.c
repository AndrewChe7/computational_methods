//
// Created by GodKnows on 26.12.2021.
//

#include "trap_method.h"
#include "simpson_method.h"
#include <stdio.h>
#include <math.h>

int main()
{
    double res, res2;
    double true_res;
    trap_method(f, 1, 3.9, 20, &res);
    simpson_method(f, 1, 3.9, 20, &res2);
    true_res = int_f(3.9) - int_f(1);
    printf("true: %lf; \ntrap method: %lf; trap method error: %e\nsimpson method: %lf; simpson method error: %e",
           true_res, res, fabs(true_res - res), res2, fabs(true_res - res2));
    return 0;
}