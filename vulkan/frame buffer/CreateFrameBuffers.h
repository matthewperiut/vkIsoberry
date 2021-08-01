#pragma once

#include "../CommonVulkanInclude.h"

void createFrameBuffers(std::vector<VkFramebuffer>& swapChainFrameBuffers, std::vector<VkImageView>& swapChainImageViews, VkDevice& device, VkRenderPass& renderPass, VkExtent2D& swapChainExtent);