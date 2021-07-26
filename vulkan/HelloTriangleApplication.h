#include "CommonVulkanInclude.h"

#include "instance/Instance.h"

#include "device/ChoosePhysicalDevice.h"
#include "device/CreateLogicalDevice.h"
#include "window/CreateSurface.h"

class HelloTriangleApplication {
private:
    const uint32_t WIDTH = 1280;
    const uint32_t HEIGHT = 720;
    GLFWwindow* window;

    VkInstance instance;

    VkPhysicalDevice physicalDevice;
    VkDevice device;

    VkQueue graphicsQueue;
    VkQueue presentQueue;

    VkSurfaceKHR surface;

public:
    void run();

private:
    void initWindow();


    void initVulkan();
    void mainLoop();
    void cleanup();
};