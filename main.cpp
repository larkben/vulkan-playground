// C++ Gui Program

#include <iostream>
#include <stdexcept>
#include <vector>
#include <cstring>
#include <optional>

#include "engine.h"

int main() {
    VulkanApplication app;
    
    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;                            // return 1
    }
    
    return EXIT_SUCCESS;                                // return 0
}