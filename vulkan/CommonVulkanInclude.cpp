// Creating extern variables for vulkan use
#include "CommonVulkanInclude.h"

bool enablePortabilitySubset = false;
bool enablePhysicalDeviceProperties2 = false;

#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif

std::vector<const char*> validationLayers = {
        "VK_LAYER_KHRONOS_validation"
};

std::vector<const char*> deviceExtensions = {
        VK_KHR_SWAPCHAIN_EXTENSION_NAME
};