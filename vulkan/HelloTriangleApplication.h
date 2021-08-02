#include "CommonVulkanInclude.h"

#include "instance/Instance.h"

#include "device/ChoosePhysicalDevice.h"
#include "device/CreateLogicalDevice.h"
#include "window/CreateSurface.h"

class HelloTriangleApplication {
private:
    GLFWwindow* window;

    VkInstance instance;

    VkPhysicalDevice physicalDevice;
    VkDevice device;

    VkQueue graphicsQueue;
    VkQueue presentQueue;

    VkSurfaceKHR surface;
    VkSwapchainKHR swapChain;

    std::vector<VkImage> swapChainImages;
    std::vector<VkImageView> swapChainImageViews;
    VkFormat swapChainImageFormat;
    VkExtent2D swapChainExtent;

    VkRenderPass renderPass;
    VkPipelineLayout pipelineLayout;
    VkPipeline graphicsPipeline;

    std::vector<VkFramebuffer> swapChainFrameBuffers;

    VkCommandPool commandPool;
    std::vector<VkCommandBuffer> commandBuffers;

    std::vector<VkSemaphore> imageAvailableSemaphores;
    std::vector<VkSemaphore> renderFinishedSemaphores;
    std::vector<VkFence> inFlightFences;
    std::vector<VkFence> imagesInFlight;
    size_t currentFrame = 0;

public:
    void run();

private:
    void initWindow();


    void initVulkan();
    void mainLoop();
    void cleanup();

    void drawFrame();
};