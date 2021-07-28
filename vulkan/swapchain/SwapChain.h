#pragma once

#include "SwapChainExtent.h"
#include "SwapChainSupport.h"
#include "SwapChainSurfaceFormat.h"
#include "SwapChainPresentMode.h"
#include "../queue families/QueueFamilies.h"

void createSwapChain(VkPhysicalDevice& physicalDevice, VkDevice& device, VkSurfaceKHR& surface, GLFWwindow* window, VkSwapchainKHR& swapChain, std::vector<VkImage>& swapChainImages, VkFormat& swapChainImageFormat, VkExtent2D& swapChainExtent);