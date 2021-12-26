//
// Created by GodKnows on 17.12.2021.
//

#ifndef COMPUTATIONAL_METHODS_UTILS_H
#define COMPUTATIONAL_METHODS_UTILS_H

#define DBL_EPSILON 2.2204460492503131e-16
#define MAX_ITERATIONS 10000
typedef double (*func_t)(double);
typedef double (*cauchy_problem_t)(double, double);

// Test function for equation f(x)=0.
// f(x) = x^3 + 4x - 2
double f(double x);

// Derivative of test function
double df(double x);

// x=phi(x) for test function
double phi(double x);

double int_f(double x);

double cauchy_problem(double x, double y);

double answer(double x);


#endif //COMPUTATIONAL_METHODS_UTILS_H
