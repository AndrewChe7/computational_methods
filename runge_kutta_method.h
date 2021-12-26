//
// Created by GodKnows on 26.12.2021.
//

#ifndef COMPUTATIONAL_METHODS_RUNGE_KUTTA_METHOD_H
#define COMPUTATIONAL_METHODS_RUNGE_KUTTA_METHOD_H
#include "utils.h"
int runge_kutta_method(cauchy_problem_t f, double a, double b, double y0, double* y, int n);

#endif //COMPUTATIONAL_METHODS_RUNGE_KUTTA_METHOD_H
