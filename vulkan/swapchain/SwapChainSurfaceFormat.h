#pragma once

#include "../CommonVulkanInclude.h"

VkSurfaceFormatKHR chooseSwapSurfaceFormat(const std::vector<VkSurfaceFormatKHR>& availableFormats);