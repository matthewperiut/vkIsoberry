#pragma once

#include "../CommonVulkanInclude.h"
#include "../queue families/QueueFamilies.h"

void createCommandPool(VkCommandPool& commandPool, VkDevice& device, VkPhysicalDevice& physicalDevice, VkSurfaceKHR& surface);