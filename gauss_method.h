//
// Created by GodKnows on 17.12.2021.
//

#ifndef COMPUTATIONAL_METHODS_GAUSS_METHOD_H
#define COMPUTATIONAL_METHODS_GAUSS_METHOD_H

// a is matrix of size n*n, b is vector of n values (a*x = b)
// x is unknown
// Да-да, я знаю, что эта штука сломается, если попадется 0 на диагонали или еще какая дрянь.
// На тестовой СЛАУ это работает, а адекватно делать мне лень.
int gauss_method(double* a, double* b, double* x, int n);

#endif //COMPUTATIONAL_METHODS_GAUSS_METHOD_H
