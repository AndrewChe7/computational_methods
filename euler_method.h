//
// Created by GodKnows on 26.12.2021.
//

#ifndef COMPUTATIONAL_METHODS_EULER_METHOD_H
#define COMPUTATIONAL_METHODS_EULER_METHOD_H
#include "utils.h"

int euler_method(cauchy_problem_t f, double a, double b, double y0, double* y, int n);
double cauchy_problem_error(func_t ans, double a, double b, const double* y, int n);

#endif //COMPUTATIONAL_METHODS_EULER_METHOD_H
