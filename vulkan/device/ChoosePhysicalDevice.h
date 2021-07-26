#pragma once

#include "../CommonVulkanInclude.h"
#include "QueueFamilies.h"

VkPhysicalDevice pickPhysicalDevice(VkInstance& instance, VkSurfaceKHR& surface);
int rateDeviceSuitability(VkPhysicalDevice device);
bool isDeviceSuitable(VkPhysicalDevice device, VkSurfaceKHR& surface);