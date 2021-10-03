#include <iostream>

#include "math.h"

namespace math {

basicmath::basicmath() {}
basicmath::~basicmath() {}

double basicmath::add(double a, double b) {
    return a + b;
}
double basicmath::sub(double a, double b) {
    return a - b;
}
double basicmath::mul(double a, double b) {
    return a * b;
}
double basicmath::div(double a, double b) {
    return a / b;
}

}

/**
 * g++ -fPIC -shared -o libmath.so math.cpp
 */

