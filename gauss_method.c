//
// Created by GodKnows on 17.12.2021.
//

#include "gauss_method.h"

int gauss_method(double* a, double* b, double* x, int n)
{
    int i, j, k;
    double t, c;

    for (i = 0; i < n-1; i++)
    {
        t = a[i*n + i];
        for (j = i+1; j < n; j++)
        {
            c = a[j*n + i] / t;
            for (k = i; k < n; k++)
            {
                a[j*n + k] -= a[i*n + k] * c;
            }
            b[j] -= b[i] * c;
        }
    }

    for (i = n-1; i >=0; i--)
    {
        x[i] = b[i] / a[i*n + i];
        for (j = i-1; j >= 0; j--)
        {
            b[j] -= b[i] * a[j*n + i] / a[i*n + i];
        }
    }

    return 0;
}