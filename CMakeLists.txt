cmake_minimum_required(VERSION 3.10)
project(VulkanTest)

set(CMAKE_CXX_STANDARD 17)

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(VulkanTest main.cpp engine.h engine.cpp)
target_link_libraries(VulkanTest Vulkan::Vulkan glfw)