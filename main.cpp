// C++ Gui Program

#include <iostream>
#include <vector>
#include <cstring>

#include "test.h"

int main() {
    Test practice;

    practice.hello();

    int t = practice.getTimesCalled();

    std::cout << t << std::endl; 

    practice.hello();

    t = practice.getTimesCalled();

    std::cout << t << std::endl;

    return 0;
}