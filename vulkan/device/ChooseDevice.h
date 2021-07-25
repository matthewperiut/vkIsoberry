#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <cstdlib>
#include <vector>

VkPhysicalDevice& pickPhysicalDevice(VkInstance& instance);
int rateDeviceSuitability(VkPhysicalDevice device);
bool isDeviceSuitable(VkPhysicalDevice device);