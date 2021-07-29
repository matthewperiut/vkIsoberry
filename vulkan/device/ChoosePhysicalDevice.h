#pragma once

#include "../CommonVulkanInclude.h"
#include "../swapchain/SwapChainSupport.h"
#include "../queue families/QueueFamilies.h"


VkPhysicalDevice pickPhysicalDevice(VkPhysicalDevice& physicalDevice, VkInstance& instance, VkSurfaceKHR& surface);
int rateDeviceSuitability(VkPhysicalDevice device);
bool isDeviceSuitable(VkPhysicalDevice device, VkSurfaceKHR& surface);
bool checkDeviceExtensionSupport(VkPhysicalDevice device);