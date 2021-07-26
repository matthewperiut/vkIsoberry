//
// Created by Jakub Periut on 7/25/21.
//

#include "Instance.h"

void createInstance(const char* name, uint32_t versionVkMakeVersion, VkInstance& instance)
{
    availableExtensionsCheck();

    if (enableValidationLayers)
    {
        if(!checkValidationLayerSupport(validationLayers))
        {
            throw std::runtime_error("validation layers requested, but not available!");
        }
    }

    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = name;
    appInfo.applicationVersion = versionVkMakeVersion;
    appInfo.pEngineName = "no engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1,0,0);
    appInfo.apiVersion = VK_API_VERSION_1_0;

    VkInstanceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    uint32_t glfwExtensionCount = 0;
    const char** glfwExtensions;
    const char* totalExtensions[3]; // This is NOT arbitrary, max output of glfwExtensions is two.
    glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

    // Portability Subset handling
    const char* values[3]; // This is NOT arbitrary, max output of glfwExtensions is two.
    if(enablePhysicalDeviceProperties2)
    {
        for (int i = 0; i < glfwExtensionCount; i++)
            values[i] = glfwExtensions[i];
        values[glfwExtensionCount] = "VK_KHR_get_physical_device_properties2";
        createInfo.enabledExtensionCount = glfwExtensionCount + 1;
        createInfo.ppEnabledExtensionNames = values;
    }
    else
    {
        createInfo.enabledExtensionCount = glfwExtensionCount;
        createInfo.ppEnabledExtensionNames = glfwExtensions;
    }

    if (enableValidationLayers)
    {
        createInfo.enabledLayerCount = static_cast<uint32_t>(validationLayers.size());
        createInfo.ppEnabledLayerNames = validationLayers.data();
    }
    else
    {
        createInfo.enabledLayerCount = 0;
    }
    //VkResult result = vkCreateInstance(&createInfo, nullptr, &instance);
    if(vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS)
    {
        throw std::runtime_error("failed to create instance!");
    }
}