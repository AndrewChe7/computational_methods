#include <stdio.h>
#include "bisection_method.h"
#include "simple_iteration_method.h"
#include "newton_method.h"

int main(void) {
    double x0l, x0r, eps;
    double answer;
    int res;
    printf("Enter x_0 left and right: \n");
    scanf("%lf%lf", &x0l, &x0r);
    printf("Enter eps: \n");
    scanf("%lf", &eps);

    res = bisection(f, x0l, x0r, &answer, eps);
    if (res < 0)
    {
        switch (res) {
            case -1:
                printf("f(xl) and f(xr) has same sign.\n");
                break;
            case -2:
                printf("Too much iterations.\n");
                break;
            default:
                printf("Something is wrong.\n");
        }
    } else {
        printf("Bisection method: \nCalculations took %d iterations and found root: %lf (%e)\nDeficiency: %lf (%e)\n\n",
               res, answer, answer, f(answer), f(answer));
    }

    res = simple_iteration(f, phi, x0l, &answer, eps);
    if (res < 0)
    {
        switch (res) {
            case -1:
                printf("Too much iterations.\n");
                break;
            default:
                printf("Something is wrong.\n");
        }
    } else {
        printf("Simple iterations method: \nCalculations took %d iterations and found root: %lf (%e)\nDeficiency: %lf (%e)\n\n",
               res, answer, answer, f(answer), f(answer));
    }

    res = newton(f, df, x0l, &answer, eps);
    if (res < 0)
    {
        switch (res) {
            case -1:
                printf("Too much iterations.\n");
                break;
            default:
                printf("Something is wrong.\n");
        }
    } else {
        printf("Newton method: \nCalculations took %d iterations and found root: %lf (%e)\nDeficiency: %lf (%e)\n\n",
               res, answer, answer, f(answer), f(answer));
    }

    return 0;
}
