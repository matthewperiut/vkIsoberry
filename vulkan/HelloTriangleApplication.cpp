#include "HelloTriangleApplication.h"
#include "swapchain/SwapChain.h"
#include "image views/CreateImageViews.h"
#include "graphics pipeline/CreateGraphicsPipeline.h"
#include "graphics pipeline/render pass/CreateRenderPass.h"
#include "frame buffer/CreateFrameBuffers.h"

void HelloTriangleApplication::run()
{
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}

void HelloTriangleApplication::initWindow()
{
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
}

void HelloTriangleApplication::initVulkan()
{
    createInstance("Hello Triangle", VK_MAKE_VERSION(1,0,0), instance);
    createSurface(surface, instance, window);
    pickPhysicalDevice(physicalDevice, instance, surface);
    createLogicalDevice(device, physicalDevice, instance, graphicsQueue, presentQueue, surface);
    createSwapChain(physicalDevice, device, surface, window, swapChain, swapChainImages, swapChainImageFormat, swapChainExtent);
    createImageViews(swapChainImages, swapChainImageViews, swapChainImageFormat, device);
    createRenderPass(device, swapChainImageFormat, renderPass);
    createGraphicsPipeline(graphicsPipeline, device, swapChainExtent, pipelineLayout, renderPass);
    createFrameBuffers(swapChainFrameBuffers, swapChainImageViews, device, renderPass, swapChainExtent);
}

void HelloTriangleApplication::mainLoop()
{
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }
}

void HelloTriangleApplication::cleanup()
{
    for (auto framebuffer : swapChainFrameBuffers) {
        vkDestroyFramebuffer(device, framebuffer, nullptr);
    }

    vkDestroyPipeline(device, graphicsPipeline, nullptr);
    vkDestroyPipelineLayout(device, pipelineLayout, nullptr);
    vkDestroyRenderPass(device, renderPass, nullptr);

    for (auto imageView : swapChainImageViews)
    {
        vkDestroyImageView(device, imageView, nullptr);
    }

    vkDestroySwapchainKHR(device, swapChain, nullptr);
    vkDestroyDevice(device, nullptr);

    vkDestroySurfaceKHR(instance, surface, nullptr);
    vkDestroyInstance(instance, nullptr);

    glfwDestroyWindow(window);

    glfwTerminate();
}
