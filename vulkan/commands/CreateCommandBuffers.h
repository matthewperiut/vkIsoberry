#pragma once

#include "../CommonVulkanInclude.h"

void createCommandBuffers(std::vector<VkCommandBuffer>& commandBuffers, std::vector<VkFramebuffer>& swapChainFrameBuffers, VkDevice& device, VkRenderPass& renderPass, VkExtent2D& swapChainExtent, VkPipeline graphicsPipeline, VkCommandPool& commandPool);