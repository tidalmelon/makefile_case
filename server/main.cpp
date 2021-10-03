#include <iostream>
#include <string>
#include <vector>

#include "math.h"
#include "str.h"

int main(int argc, char* argv[]){
    double a = 10;
    double b = 2;

    std::cout << "a + b = " << math::basicmath::add(a, b) << std::endl;
    std::cout << "a - b = " << math::basicmath::sub(a, b) << std::endl;
    std::cout << "a * b = " << math::basicmath::mul(a, b) << std::endl;
    std::cout << "a / b = " << math::basicmath::div(a, b) << std::endl;

    std::string line = "i love beijing tiananmen";
    std::vector<std::string> arr;
    util::split(line, " ", arr);

    int count = arr.size();
    for(int i=0; i < count; i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}

/**
 * g++ test_staticmath.cpp -L. -lstaticmath
 * g++ TestStaticLibrary.cpp -L../StaticLibrary -lstaticmath
 */

