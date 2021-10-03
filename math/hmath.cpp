#include <iostream>

#include "hmath.h"

namespace math {

highmath::highmath() {}
highmath::~highmath() {}

double highmath::add(double a, double b) {
    return a + b;
}
double highmath::sub(double a, double b) {
    return a - b;
}
double highmath::mul(double a, double b) {
    return a * b;
}
double highmath::div(double a, double b) {
    return a / b;
}

}

/**
 * g++ -fPIC -shared -o libmath.so math.cpp
 */

