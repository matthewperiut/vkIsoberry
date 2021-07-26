#pragma once

#include "../CommonVulkanInclude.h"

void createLogicalDevice(VkInstance& instance, VkPhysicalDevice& physicalDevice, VkDevice& device, VkQueue& graphicsQueue, VkQueue& presentQueue, VkSurfaceKHR& surface);