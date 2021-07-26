#pragma once

#include "../CommonVulkanInclude.h"

VkPhysicalDevice& pickPhysicalDevice(VkInstance& instance);
int rateDeviceSuitability(VkPhysicalDevice device);
bool isDeviceSuitable(VkPhysicalDevice device);