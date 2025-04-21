//#pragma once

#include <iostream>

class Test {

public:
    Test();
    void hello();
    int getTimesCalled();
private:
    int times_called;

};