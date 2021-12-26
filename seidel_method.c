//
// Created by GodKnows on 17.12.2021.
//

#include "seidel_method.h"
#include "utils.h"
#include <stdlib.h>
#include <math.h>

double vector_difference(const double* x, const double* y, int n)
{
    int i;
    double t;
    double res = 0;
    for (i = 0; i < n; i++)
    {
        t = x[i] - y[i];
        res += t*t;
    }
    return sqrt(res);
}

int copy_vector(const double* from, double* to, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        to[i] = from[i];
    }
    return 0;
}


int seidel_method(const double* a, const double* b, double* x, int n, double eps)
{
    int i, j;
    double t, s;
    int iterations = 0;
    double* x_prev = (double*) malloc(n * sizeof(double));
    do {
        copy_vector(x, x_prev, n);
        for (i = 0; i < n; i++)
        {
            t = a[i*n + i];
            s = 0;
            for (j = 0; j < n; j++) {
                if (j == i)
                    continue;
                s -= a[i*n+j] / t * x[j];
            }
            s += b[i] / t;
            x[i] = s;
        }

        iterations++;
        if (iterations > MAX_ITERATIONS)
        {
            free(x_prev);
            return -1;
        }
    } while (vector_difference(x, x_prev, n) > eps);

    free(x_prev);
    return 0;
}