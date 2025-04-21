#include "test.h"

Test::Test() {
    times_called = 0;
}

void Test::hello() {
    std::cout << "Hello World!" << std::endl;

    times_called++;
}

int Test::getTimesCalled() {
    return times_called;
}