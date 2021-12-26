//
// Created by GodKnows on 26.12.2021.
//

#include "interpolation_polynomial.h"
#include "gauss_method.h"
#include <stdlib.h>

double get_polynomial_value(const double* a, double x, int n)
{
    int i;
    double res = 0;
    double xi = 1;
    for (i = 0; i < n; i++)
    {
        res += a[i] * xi;
        xi *= x;
    }
    return res;
}

int find_polynomial(double* a, int n, const double* x, const double* y)
{
    int i, j;
    double* A = (double*) malloc(n*n*sizeof(double));
    double* b = (double*) malloc(n * sizeof(double));
    for (i = 0; i < n; i++)
    {
        double xij = 1;
        for (j = 0; j < n; j++)
        {
            A[i*n + j] = xij;
            xij *= x[i];
        }
        b[i] = y[i];
    }
    gauss_method(A, b, a, n);
    free(A);
    free(b);
    return 0;
}