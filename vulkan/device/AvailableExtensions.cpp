#include "AvailableExtensions.h"

void availableExtensionsCheck(bool print)
{
    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    std::vector<VkExtensionProperties> extensions(extensionCount);
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, extensions.data());

    if(print)
        std::cout << "available extensions:\n";

    for (const auto& extension : extensions)
    {
        if(print)
            std::cout << '\t' << extension.extensionName << '\n';
        if(std::string(extension.extensionName) == "VK_KHR_get_physical_device_properties2")
            enablePhysicalDeviceProperties2 = true;
    }
}