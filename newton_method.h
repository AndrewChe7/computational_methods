//
// Created by GodKnows on 17.12.2021.
//

#ifndef COMPUTATIONAL_METHODS_NEWTON_METHOD_H
#define COMPUTATIONAL_METHODS_NEWTON_METHOD_H
#include "utils.h"

int newton(func_t f, func_t df, double x0, double* res, double eps);

#endif //COMPUTATIONAL_METHODS_NEWTON_METHOD_H
