#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <vector>
#include <cstring>
#include <optional>
#include <set>

struct QueueFamilyIndices {
    std::optional<uint32_t> graphicsFamily;
    std::optional<uint32_t> presentFamily;

    bool isComplete() {
        return graphicsFamily.has_value() && presentFamily.has_value();
    }
};

class VulkanApplication {

    public:
        void run();
    
    private:
        GLFWwindow* window;

        VkInstance instance;
        VkSurfaceKHR surface;

        VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;
        VkDevice device;

        VkQueue graphicsQueue;
        VkQueue presentQueue;

        void createSurface();
        
        void initWindow();
        
        void initVulkan();
    
        void createLogicalDevice();
    
        void pickPhysicalDevice();
    
        bool isDeviceSuitable(VkPhysicalDevice device);
    
        QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);
        
        void createInstance();
        
        void mainLoop();
        
        void cleanup();
    };