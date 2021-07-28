#pragma once

#include "../CommonVulkanInclude.h"

VkPresentModeKHR chooseSwapPresentMode(const std::vector<VkPresentModeKHR>& availablePresentModes);