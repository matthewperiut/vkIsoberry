#pragma once

#include "../CommonVulkanInclude.h"
#include "../queue families/QueueFamilies.h"

void createLogicalDevice(VkDevice& device, VkPhysicalDevice& physicalDevice, VkInstance& instance, VkQueue& graphicsQueue, VkQueue& presentQueue, VkSurfaceKHR& surface);