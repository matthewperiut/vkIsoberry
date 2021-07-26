// Creating extern variables for vulkan use
#include "CommonVulkanInclude.h"

#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif

std::vector<const char*> validationLayers = {
        "VK_LAYER_KHRONOS_validation"
};