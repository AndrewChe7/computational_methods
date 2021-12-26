//
// Created by GodKnows on 26.12.2021.
//

#include "utils.h"
#include "euler_method.h"
#include "euler_mod_method.h"
#include "runge_kutta_method.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 11;
    double* y;
    y = (double*) malloc(n * sizeof(double));
    euler_method(cauchy_problem, 1, 3, 1, y, n);
    printf("Euler method: %lf\n", cauchy_problem_error(answer, 1, 3, y, n));
    euler_mod_method(cauchy_problem, 1, 3, 1, y, n);
    printf("Euler method modified: %lf\n", cauchy_problem_error(answer, 1, 3, y, n));
    runge_kutta_method(cauchy_problem, 1, 3, 1, y, n);
    printf("Runge-Kutta method: %lf\n", cauchy_problem_error(answer, 1, 3, y, n));
    free(y);
    return 0;
}